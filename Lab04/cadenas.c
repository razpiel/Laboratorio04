// Librerias
#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[20];
    char str2[20];


    printf("Digite la primera palabra: ");
    fgets(str1, 20, stdin);

    printf("Digite la segunda palabra: ");
    fgets(str2, 20, stdin);

    int comparative = strcmp(str1, str2);

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

