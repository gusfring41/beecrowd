#include <stdio.h>

int main()
{

    int n, m; scanf("%d %d", &n, &m);
    int matriz[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = 1;
    int tamanho_atual = 1;
    int foi = 1;
    int i, j, i_comeco, j_comeco;
    i_comeco = 0; j_comeco = 0;
    int minimo = (n < m)? n : m;

    while(tamanho_atual <= minimo)
    {
        i = i_comeco;
        j = j_comeco;

        while(i < (i_comeco + tamanho_atual))
        {
            if(matriz[i][j] == 0)
            {
                foi = 0; 
                break;
            } else{
                j++;
                if(j == (j_comeco + tamanho_atual))
                {
                    i++;
                    j = j_comeco;
                }
            }

        }

        if(foi)
        {
            maior = tamanho_atual;
            tamanho_atual++;
        } else {
            j_comeco++;
            if(j_comeco > (m-tamanho_atual))
            {
                i_comeco++;
                j_comeco = 0;
                if(i_comeco > (n - tamanho_atual))
                {
                    break;
                }
            }
            foi = 1;
        }
    }

    int testes; scanf("%d", &testes);
    while(testes--)
    {
        int s; scanf("%d", &s);
        if(s <= maior)
        {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}