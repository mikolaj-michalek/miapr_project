FROM jazzy:latest

ENV DEBIAN_FRONTEND=noninteractive

# 1. Instalacja podstawowych narzędzi systemowych
RUN apt-get update && apt-get install -y \
    sudo \
    curl \
    git \
    python3-pip \
    build-essential \
    qtbase5-dev \
    && rm -rf /var/lib/apt/lists/*

# 2. Przygotowanie i aktualizacja bazy rosdep
RUN if [ ! -f /etc/ros/rosdep/sources.list.d/20-default.list ]; then \
        rosdep init; \
    fi && \
    rosdep update

# 3. Automatyczne dodanie source środowiska do terminala
RUN echo "source /opt/ros/jazzy/setup.bash" >> /root/.bashrc

WORKDIR /root/Shared/MIAPR_Projekt/colcon_ws

# UWAGA: Rosdep zainstaluje resztę zależności (w tym lvr2), gdy uruchomisz kontener 
# i wykonasz `rosdep install` w swoim sklonowanym workspace.

CMD ["/bin/bash"]
