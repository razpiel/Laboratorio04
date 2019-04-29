// Librerias utilizadas
#include<stdio.h>

int main (int argc, char** argv)
{
    // Creacion de variables a solicitar
    int n;

    // Inicializacion de la variable a solicitar
    printf("Digite el numero entero para la piramide: \n");
    scanf("%d", &n);
    printf("\n");

    /*
    Se inicializan el resto de las variables para evitar conflictos de
    formato en los siguientes pasos
    */
    int scale[n-1];
    int i,j;

    // Se utiliza un bucle for para la creacion de la piramide
    for(i=0; i<n; i++)
    {
        scale[i] = i+1;

        for(j=0; j<=i; j++)
        {
            printf("%d ", scale[j]);
            if(j==i)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
