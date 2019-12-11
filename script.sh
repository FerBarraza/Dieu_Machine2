
#! /bin/bash

echo Script para instalar programas necesarios y que funcione la aplicacion

echo cmatrix y otras dependencias

echo Directorio de aplicacion

sleep 1s

apt-get update

#apt-get upgrade

apt-get install cmatrix

apt-get install alsa-utils

ls

cd temas

echo ...

ls

gcc -o tema1 tema1.c

gcc -o tema2 tema2.c

gcc -o tema3 tema3.c

gcc -o tema4 tema4.c

gcc -o tema5 tema5.c

gcc -o tema6 tema6.c

gcc -o tema7 tema7.c

gcc -o tema8 tema8.c

gcc -o tema9 tema9.c

gcc -o tema10 tema10.c

gcc -o tema11 tema11.c

gcc -o tema12 tema12.c

gcc -o tema13 tema13.c

gcc -o tema14 tema14.c

gcc -o tema15 tema15.c

gcc -o tema16 tema16.c

gcc -o tema17 tema17.c

gcc -o tema18 tema18.c

gcc -o tema19 tema19.c

gcc -o tema20 tema20.c

gcc -o tema21 tema21.c

cd ..

gcc -o main main.c

echo Se iniciara la ejecucion del programa desde este mismo Script

echo Tambien puede cerrar el script y hacerlo con ".main"

sleep 2s 

./main

