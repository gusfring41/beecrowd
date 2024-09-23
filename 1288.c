#include <stdio.h>
#include <stdlib.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

int main()
{

    int testes; scanf("%d", &testes);
    while(testes--)
    {
        int n; scanf("%d", &n);
        int matriz_misseis[2][n+1];
        matriz_misseis[0][0] = 0; matriz_misseis[1][0] = 0;

        for(int i=1; i<n+1; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%d", &matriz_misseis[j][i]);
            }
        }

        int k, r; scanf("%d %d", &k, &r);

        int matriz_resposta[n+1][k+1];

        for(int i=0; i<n+1; i++)
        {
            matriz_resposta[i][0] = 0;
            for(int j=0; j<k+1; j++)
            {
                matriz_resposta[0][j] = 0;
            }
        }
    
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<k+1; j++)
            {
                if(matriz_misseis[1][i] > j)
                {
                    matriz_resposta[i][j] = matriz_resposta[i-1][j];
                } else {
                    matriz_resposta[i][j] = max(matriz_resposta[i-1][j], (matriz_resposta[i-1][j-(matriz_misseis[1][i])] + matriz_misseis[0][i]));
                }
            }
        }

        if(matriz_resposta[n][k] >= r)
        {
            printf("Missao completada com sucesso\n");
        } else {
            printf("Falha na missao\n");
        }

    }

    return 0;
}