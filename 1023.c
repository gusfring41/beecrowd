#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b) {
    residencia *residenciaA = (residencia *)a;
    residencia *residenciaB = (residencia *)b;
    if (residenciaA->consumo_medio < residenciaB->consumo_medio) return -1;
    if (residenciaA->consumo_medio > residenciaB->consumo_medio) return 1;
    return 0;
}

int main()
{
    int n; scanf("%d", &n);
    int cidade = 1;

    while(n != 0)
    {   
        double total_consumo = 0;
        int total_pessoas = 0;
        double consumo_medio = 0;
        int index = 0;
        int residencias[201];

        for(int i=0; i<201; i++)
        {
            residencias[i] = 0;
        }

        while(n--)
        {
            int x; double y; scanf("%d %lf", &x, &y);
            residencias[index] += x
            residencias[index].consumo_medio = y/x;
            total_consumo += y;
            total_pessoas += x;
            index++;
        }

        qsort(residencias, index, sizeof(residencia), compare);

        for(int i=1; i<index; i++)
        {
            if(floor(residencias[i].consumo_medio) == floor(residencias[i-1].consumo_medio))
            {
                residencias[i-1].qnt_pessoas += residencias[i].qnt_pessoas;
                residencias[i].qnt_pessoas = 0; 
            }
            
        }
    
        
        consumo_medio = total_consumo*1.0/total_pessoas;
        double resultado = floor(consumo_medio * 100) / 100.0;    

        printf("Cidade# %d:\n", cidade);

        for(int i=0; i<index; i++)
        {
            if(residencias[i].qnt_pessoas > 0)
            {
                printf("%d-%.0lf", residencias[i].qnt_pessoas, floor(residencias[i].consumo_medio));
                if(i < index-1)
                {
                    printf(" ");
                }
            }
            
        }

        printf("\nConsumo medio: %.2lf m3.\n", resultado);
        
        scanf("%d", &n);
        if(n != 0)
        {
            printf("\n");
        }
        cidade++;
    }
    
    return 0;
}