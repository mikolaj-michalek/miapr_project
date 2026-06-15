# Projekt MIAPR - Mesh Navigation

Ten plik README zawiera instrukcję krok po kroku, jak uruchomić środowisko projektu, zainstalować niezbędne pakiety, zbudować przestrzeń roboczą oraz odtworzyć uzyskane rezultaty badań i benchmarków dla zaimplementowanych algorytmów planowania ścieżek. Dodatkowe informacje można znaleźć w załączonym raporcie "raport_miapr_mesh_navigation.pdf" oraz artykule "PATHFINDING IN 3D SPACE - A*, THETA*, LAZY THETA* IN OCTREE STRUCTURE.pdf".

---

## Lokalizacja Zaimplementowanych Algorytmów i Konfiguracja

W ramach projektu zaimplementowano oraz przetestowano dwa algorytmy przeszukiwania przestrzeni: **A*** oraz **Theta***.

1. **Kod źródłowy algorytmów:**
   Wszystkie pliki implementacji algorytmów A* oraz Theta* znajdują się w podścieżce:
   colcon_ws/src/mesh_navigation/cvp_mesh_planner

2. **Konfiguracja planistów (RViz / Move Base Flex):**
   Aby zaimplementowane algorytmy były widoczne i gotowe do użycia w środowisku nawigacyjnym oraz wizualizacji RViz, zostały one odpowiednio dodane i skonfigurowane w pliku konfiguracyjnym Move Base Flex (MBF) pod ścieżką:
   /root/Shared/MIAPR_Projekt/colcon_ws/src/mesh_navigation_tutorials/mesh_navigation_tutorials/config/mbf_mesh_nav.yaml

---

## Instrukcja Odtworzenia Rezultatów (Krok po Kroku)

Postępuj zgodnie z poniższymi krokami, zaczynając od czystego systemu z zainstalowanym Dockerem.

### Krok 1: Klonowanie Repozytorium
Pobierz repozytorium projektu na swój lokalny komputer za pomocą narzędzia Git, a następnie przejdź do pobranego katalogu:

    git clone https://github.com/mikolaj-michalek/miapr_project.git
    cd miapr_project

### Krok 2: Uruchomienie Kontenera Docker
Uruchom skrypt przygotowujący i odpalający kontener ze środowiskiem ROS 2 Jazzy:

    ./docker_run_jazzy.sh "Nazwa_folderu"

Po wykonaniu tej komendy zostaniesz automatycznie zalogowany do wnętrza kontenera jako użytkownik root.

### Krok 3: Instalacja Paczek i Zależności
Będąc wewnątrz kontenera, przejdź do głównego folderu projektu i zaktualizuj menedżer pakietów oraz zainstaluj niezbędne zależności wymagane przez pakiety ROS 2:

    cd /root/Shared/Nazwa_folderu
    apt-get update

### Krok 4: Budowanie Środowiska
Przejdź do katalogu przestrzeni roboczej colcon_ws, zbuduj pakiety za pomocą colcon i załaduj zmienne środowiskowe:

    cd colcon_ws
    colcon build --symlink-install
    source install/setup.bash

### Krok 5: Uruchomienie Środowiska i Tutoriala
Aby uruchomić symulację, węzły nawigacji oraz interfejs graficzny RViz z załadowanym światłem (tutaj: parking garage), wykonaj następujące polecenie launch:

    ros2 launch mesh_navigation_tutorials mesh_navigation_tutorials_launch.py world_name:=parking_garage

Po uruchomieniu powinieneś zobaczyć okno RViz z załadowaną siatką trójwymiarową terenu. W celu zmiany algorytmu planowania ruchu należy wybrać go w oknie po prawej stronie w sekcji MbfGoalAction pod parametrem Planner Name. Aby wybrać cel ruchu robota należy użyć narzędzia Mesh Goal z górnego paska i wybrać punkt na siatce świata.

### Krok 6: Uruchomienie Plików Benchmarkowych
W celu zebrania wyników i uruchomienia testów porównawczych dla algorytmów, otwórz nowy terminal, wejdź do kontenera (Docker exec -it "Nazwa_kontenera" bash), załaduj środowisko (source colcon_ws/install/setup.bash) i uruchom dedykowane skrypty benchmarkowe dla mapy parking_garage:

* Benchmark Łatwy (Ten sam poziom parkingu):

    python3 Algorithm_Benchmark_Easy.py

* Benchmark Trudny (Różne poziomy parkingu):

    python3 Algorithm_Benchmark_Hard.py

Skrypty te przetestują zaimplementowane algorytmy w zdefiniowanych scenariuszach i pozwolą na weryfikację uzyskanych czasów planowania, długości wyznaczonych ścieżek i ich krzywizn. Możliwa jest w nich zmiana świata (np: "tray", "floor_is_lava"), pozycji początkowej robota i celu oraz ilości testów i ścieżek zapisu danych.
