#include <stdio.h>

int main()
{

    int n; scanf("%d", &n);
    int vetor[n];
    int maior_distancia = 0;

    for(int i=0; i<n; i++)
    {
        scanf("%d", &vetor[i]);
        for(int j=0; j<i; j++)
        {
            int distancia = vetor[j] + vetor[i] + (i-j);
            if(distancia > maior_distancia)
            {
                maior_distancia = distancia;
            }
        }
    }

    printf("%d\n", maior_distancia);

    return 0;
}