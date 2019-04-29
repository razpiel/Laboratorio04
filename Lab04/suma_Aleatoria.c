// Librerias utiizadas
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char** argv)
{
    // Creacion de variables.
    int supLimit, infLimit;
    int n=0;
    int sum=0;

    // Inicializacion de variables.
    printf("Ingrese el limite inferior: \n");
    scanf("%d", &infLimit);
    printf("Ingrese el limite superior: \n");
    scanf("%d", &supLimit);

    do
    {
        srand(time(NULL));
        int numRamdom = infLimit +  rand() % (supLimit + 1 - infLimit);
        
        if(numRamdom > infLimit && numRamdom < supLimit)
        {
            sum = sum + numRamdom;
            n++;
        }
        else
        {
            printf("Ha habido un error, revisa el codigo! \n");
            printf("Ha salido el numero %d \n", numRamdom);
            printf("Ingresa 1000 para cancelar el proceso \n");
            scanf("%d", &n);
        }

    }while(n<1000);

    if(n==1000)
    {
        printf("La suma total de los 1000 numeros es: %d \n", sum);
    }

    return 0;
}



