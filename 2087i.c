#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareStrings(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}


int main()
{

    int n; scanf("%d", &n);
    while(n)
    {
        getchar();
        char dicionario[n][101];

        for(int i=0; i<n; i++)
        {
            scanf("%s", dicionario[i]);
        }


        qsort(dicionario, n, 101, compareStrings);

        int verificador = 1;

        for(int i=0; i<n; i++)
        {
            int final = i; int index_caractere = 0;
            while((final<n) && (dicionario[i][index_caractere] == dicionario[final][index_caractere]))
            {
                final++;
            }

            for(int j=i+1; j<final; j++)
            {
                int tamanho_1 = strlen(dicionario[i]);
                int tamanho_2 = strlen(dicionario[j]);

                int menor_tamanho = tamanho_1 < tamanho_2 ? tamanho_1 : tamanho_2;
                index_caractere = 1;
                int contador = 1;

                while((index_caractere < menor_tamanho) && (dicionario[i][index_caractere] == dicionario[j][index_caractere]))
                {
                    index_caractere++;
                    contador++;
                }
                
                if(contador == menor_tamanho)
                {
                    verificador = 0;
                    break;
                }
            }

            if(!verificador)
            {
                break;
            }

            
        }

        if(verificador)
        {
            printf("Conjunto Bom\n");
        } else {
            printf("Conjunto Ruim\n");
        }

        scanf("%d", &n);
    }

    return 0;
}