// Librerias
#include<stdio.h>
#include<string.h>

int main ()
{
    // Creacion de variables para introducir las palabras, limite solicitado
    char str1[20];
    char str2[20];

    // Se obtiene las palabras digitadas por el usuario y se guarda en memoria
    printf("Digite la primera palabra: ");
    fgets(str1, 20, stdin);

    printf("Digite la segunda palabra: ");
    fgets(str2, 20, stdin);


    // Funcion de comparacion de las cadenas
    int comparative = strcmp(str1, str2);


    // Analizador de la comparacion de cadenas e informador al usuario
    if(comparative==0)
    {
        printf("Las palabras son iguales. \n");
    }
    else
    {
        printf("Las palabras son distintas. \n");
    }

    return 0;
}

