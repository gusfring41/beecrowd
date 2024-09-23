#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main()
{

    int n;
    while(scanf("%d", &n) != EOF)
    {
        getchar();

        int teclas_totais = 0;
        char dicionario[n][81];

        for(int i=0; i<n; i++)
        {
            scanf("%[^\n]s", dicionario[i]); getchar();
        }

        qsort(dicionario, n, 81, compareStrings);

        for(int i=0; i<n; i++)
        {
            
            int index_caractere = 0;
            int tamanho_1 = strlen(dicionario[i]);
            int teclas_necessarias = tamanho_1;
            int inicio = 0;
            int fim = 0;

            char caractere_inicial = dicionario[i][0];

            while((dicionario[inicio][index_caractere] != caractere_inicial) && (inicio<n))
            {
                inicio++;
            }

            fim = inicio;

            while((dicionario[inicio][index_caractere] == dicionario[fim][index_caractere]) && (fim < n))
            {
                fim++;
            }


            if((fim - inicio) == 1)
            {
                index_caractere = tamanho_1;
                teclas_necessarias = 1;
            }

            index_caractere++;

            while(index_caractere < tamanho_1)
            {
                int verificador = 1;
                int total_palavras = 0;

                for(int k=inicio; k<fim; k++)
                {
                    int tamanho_2 = strlen(dicionario[k]);
                    if(index_caractere < tamanho_2)
                    {
                        if(dicionario[i][index_caractere] != dicionario[k][index_caractere])
                        {
                            verificador = 0;
                            if(k < i)
                            {
                                inicio++;
                            }
                        } else {
                            total_palavras++;
                        }
                    } 
                }

                if((verificador == 1) && (total_palavras > 1))
                {
                    teclas_necessarias--;
                } else if(total_palavras <= 1) 
                {
                    teclas_necessarias -= (tamanho_1 - index_caractere - 1);
                    break;
                }
                
                
                fim = inicio + total_palavras;
                index_caractere++;
            }

            teclas_totais += teclas_necessarias;
            
        }

        printf("%.2f\n", teclas_totais*1.0/n);
    }



    return 0;
}