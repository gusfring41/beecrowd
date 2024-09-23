#include <stdio.h>

int main()
{

    int N, M;
    while(scanf("%d %d", &N, &M) != EOF)
    {
        int matriz[N][M];
        int tabuleiro[N][M];

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {

                if(matriz[i][j] == 1)
                {
                    tabuleiro[i][j] = 9;
                } else {

                    int total_pq = 0;

                    if(i > 0)
                    {
                        int cima = matriz[i-1][j];
                        if(cima == 1)
                        {
                            total_pq++;
                        }
                    }

                    if(i < N-1)
                    {
                        int baixo = matriz[i+1][j];
                        if(baixo == 1)
                        {
                            total_pq++;
                        }
                    }

                    if(j > 0)
                    {
                        int esquerda = matriz[i][j-1];
                        if(esquerda == 1)
                        {
                            total_pq++;
                        }
                    }

                    if(j < M-1)
                    {
                        int direita = matriz[i][j+1];
                        if(direita == 1)
                        {
                            total_pq++;
                        }
                    }

                    tabuleiro[i][j] = total_pq;

                }
            }
        }

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }


    }

    return 0;
}