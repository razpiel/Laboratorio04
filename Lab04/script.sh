#!/bin/sh

# Le dice al usuario la direccion actual donde deberian estar los archivos
echo "Direccion actual: "
echo $PWD

# Contador para saber si estan todos los archivos
num=0

# Cada uno de los if's detecta la presenta de un archivo por separado, 
# y aumenta en 1 el contador
if [ -e $PWD/cadenas/cadenas.c ]
then
    echo "Script de cadenas presente"
    num=$(($num+1))
fi

if [ -e $PWD/piramide/impresion_Numeros.c ]
then
    echo "Script de piramide presente"
    num=$(($num+1))
fi

if [ -e $PWD/suma/suma_Aleatoria.c ]
then
    echo "Script de suma presente"
    num=$(($num+1))
fi

if [ -e $PWD/traspuesta/trasposicion.c ]
then
    echo "Script de trasposicion presente"
    num=$(($num+1))
fi

# Uiliza el contador para decirle al usuario sobre la presencia de los
# archivos.
if [ $num -eq 4 ]
then
    echo "Se presentan todos los archivos del trabajo"
else
    echo "Se a presentado un error, revise el copiado de los archivos"
fi
