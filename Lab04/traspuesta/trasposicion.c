#include<stdio.h>

int main()
{
    //Creacion de variables
    int i, j;

    //Creacion de matrices
    int m1[3][3];
    int m2[3][3];

    //Introduccion de variables a la matriz
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("Digite el valor para [%d][%d]: ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }


    //Trasposicion de la matriz
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            m2[j][i]=m1[i][j];
        }
    }

    //Impresion de matriz traspuesta
    printf("\nImpresion de la matriz traspuesta: \n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d ", m2[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
