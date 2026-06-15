# Projekt MIAPR - Mesh Navigation

Ten plik README zawiera instrukcję krok po kroku, jak uruchomić środowisko projektu, zainstalować niezbędne pakiety, zbudować przestrzeń roboczą oraz odtworzyć uzyskane rezultaty badań i benchmarków dla zaimplementowanych algorytmów planowania ścieżek. Dodatkowe informacje można znaleźć w załączonym raporcie "raport_miapr_mesh_navigation.pdf" oraz artykule "PATHFINDING IN 3D SPACE - A*, THETA*, LAZY THETA* IN OCTREE STRUCTURE.pdf".

---

## Lokalizacja Zaimplementowanych Algorytmów i Konfiguracja

W ramach projektu zaimplementowano oraz przetestowano dwa algorytmy przeszukiwania przestrzeni: **A*** oraz **Theta***.

1. **Kod źródłowy algorytmów:**
   Wszystkie pliki implementacji algorytmów A* oraz Theta* znajdują się w strukturze pakietu `cvp_mesh_planner` pod ścieżką:
   `colcon_ws/src/mesh_navigation/cvp_mesh_planner`

2. **Konfiguracja planistów (RViz / Move Base Flex):**
   Aby zaimplementowane algorytmy były widoczne i gotowe do użycia w środowisku nawigacyjnym oraz wizualizacji RViz, zostały odpowiednio skonfigurowane w pliku Move Base Flex (MBF) pod ścieżką:
   `colcon_ws/src/mesh_navigation_tutorials/mesh_navigation_tutorials/config/mbf_mesh_nav.yaml`

---

## Instrukcja Odtworzenia Rezultatów

### Krok 1: Klonowanie Repozytorium
Pobierz repozytorium projektu na swój lokalny komputer, a następnie przejdź do katalogu projektu:

```bash
git clone https://github.com/mikolaj-michalek/miapr_project.git
cd miapr_project
```

### Krok 2: Przygotowanie i Uruchomienie Kontenera Docker
Zbuduj obraz środowiska na podstawie dołączonego pliku `Dockerfile`, a następnie uruchom skrypt startowy kontenera:

```bash
docker build -t jazzy:latest .
./docker_run_jazzy.sh miapr_project
```

Po wykonaniu tej komendy zostaniesz automatycznie zalogowany do wnętrza kontenera jako użytkownik `root`.

### Krok 3: Instalacja Zależności i Bibliotek
Będąc wewnątrz kontenera, przejdź do katalogu przestrzeni roboczej i wpisz:

```bash
cd /root/Shared/miapr_project/colcon_ws
apt-get update
rosdep update
rosdep install --from-paths src --ignore-src -r -y
```

### Krok 4: Budowanie Środowiska
Skompiluj wszystkie pakiety za pomocą narzędzia `colcon` i załaduj wygenerowane zmienne środowiskowe:

```bash
colcon build --symlink-install
source install/setup.bash
```

### Krok 5: Uruchomienie Środowiska i Symulacji
Aby uruchomić symulację, węzły nawigacji oraz interfejs graficzny RViz z załadowanym światem wielopoziomowego garażu, wykonaj następujące polecenie:

```bash
ros2 launch mesh_navigation_tutorials mesh_navigation_tutorials_launch.py world_name:=parking_garage
```

Po uruchomieniu zobaczysz okno RViz z załadowaną trójwymiarową siatką terenu. W celu zmiany algorytmu planowania ruchu wybierz go w oknie po prawej stronie w sekcji `MbfGoalAction` pod parametrem `Planner Name`. Aby wskazać cel ruchu robota, użyj narzędzia `Mesh Goal` z górnego paska narzędziowego i kliknij punkt na siatce świata.

### Krok 6: Uruchomienie Plików Benchmarkowych
W celu zebrania wyników i uruchomienia testów porównawczych dla algorytmów, otwórz nowy terminal na swoim komputerze, wejdź do działającego kontenera, załaduj środowisko i uruchom dedykowane skrypty pythonowe:

```bash
# Wejście do kontenera z nowego terminala
docker exec -it miapr_project_kontener bash

# Załadowanie środowiska
cd /root/Shared/miapr_project/colcon_ws
source install/setup.bash
cd ..

# Uruchomienie testu łatwego (ten sam poziom parkingu)
python3 Algorithm_Benchmark_Easy.py

# Uruchomienie testu trudnego (różne poziomy parkingu)
python3 Algorithm_Benchmark_Hard.py
```

Skrypty te przetestują zaimplementowane algorytmy w zdefiniowanych scenariuszach i pozwolą na weryfikację uzyskanych czasów planowania, długości wyznaczonych ścieżek i ich krzywizn.
