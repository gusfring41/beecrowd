#include <stdio.h>

int main()
{

    int n; 

    while(scanf("%d", &n) != EOF)
    {
        int vetor[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &vetor[i]);
        }

        int numero; scanf("%d", &numero);
        int indice_numero;

        for(int i=0; i<n; i++)
        {
            if(vetor[i] == numero)
            {
                indice_numero = i;
                break;
            }
        }

        int eliminados = 0;
        int fator = 2;
        int esquerda = indice_numero+1;

        while(fator <= esquerda)
        {

            eliminados += esquerda/fator;

            if((indice_numero+1)%fator == 0)
            {
                printf("N\n");
                break;
            }

            indice_numero -= eliminados;
            esquerda = indice_numero+1;
            fator++;
            eliminados = 0;
        }

        if(fator > esquerda)
        {
            printf("Y\n");
        }
 
    }

    return 0;
}