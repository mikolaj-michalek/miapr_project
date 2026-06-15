#!/bin/bash

# 1. Sprawdzenie, czy podano nazwę przedmiotu
PRZEDMIOT=$1

if [ -z "$PRZEDMIOT" ]; then
    echo "BŁĄD: Musisz podać nazwę przedmiotu!"
    echo "Użycie: ./run_ros.sh <nazwa_przedmiotu>"
    echo "Przykład: ./run_ros.sh pnimpra"
    exit 1
fi

if [ -z "$SUDO_USER" ]
then
      user=$USER
else
      user=$SUDO_USER
fi

xhost +local:root > /dev/null 2>&1

XAUTH=/tmp/.docker.xauth
if [ -d "$XAUTH" ]; then
    rm -rf "$XAUTH"
fi
rm -f "$XAUTH"
touch "$XAUTH"
chmod 644 "$XAUTH"

xauth_list=$(xauth nlist "$DISPLAY" | sed -e 's/^..../ffff/')
if [ -n "$xauth_list" ]; then
    echo "$xauth_list" | xauth -f "$XAUTH" nmerge -
fi

# 2. Automatyczne tworzenie folderu dla przedmiotu na Twoim komputerze
mkdir -p /home/$user/Shared/$PRZEDMIOT

echo "Uruchamiam kontener dla przedmiotu: $PRZEDMIOT na obrazie jazzy:latest"

# 3. Uruchomienie Dockera z dynamiczną nazwą i ścieżką
docker run -it \
    --name=${PRZEDMIOT}_kontener \
    --workdir=/root/Shared/${PRZEDMIOT} \
    --shm-size=1g \
    --ulimit memlock=-1 \
    --env="DISPLAY" \
    --env="QT_X11_NO_MITSHM=1" \
    --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
    --privileged \
    --volume="/home/$user/Shared:/root/Shared:rw" \
    --device=/dev/usb \
    --device=/dev/video0 \
    --device=/dev/dri:/dev/dri \
    --env="XAUTHORITY=$XAUTH" \
    --volume="$XAUTH:$XAUTH" \
    --network=host \
    jazzy:latest \
    bash
