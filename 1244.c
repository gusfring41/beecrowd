#include <stdio.h>
#include <string.h>

typedef struct
{
    int tamanho;
    char palavra[51];
} palavras;

int main()
{

    int n; scanf("%d", &n); getchar();
    while(n--)
    {
        char frase[2501];
        scanf("%[^\n]s", frase); getchar();
        int tamanho_frase = strlen(frase);

        palavras conjunto[51];
        int index_palavra = 0;
        int index_char = 0;
        int tamanho_palavra = 0;

        for(int i=0; i<tamanho_frase; i++)
        {
            while((frase[i] == ' ') && (i<tamanho_frase))
            {
                i++;
            }
                
            while((frase[i] != ' ') && (i < tamanho_frase))
            {
                conjunto[index_palavra].palavra[index_char] = frase[i];
                tamanho_palavra++;
                index_char++;
                i++;
            }

            conjunto[index_palavra].palavra[index_char] = '\0';
            conjunto[index_palavra].tamanho = tamanho_palavra;
            tamanho_palavra = 0;
            index_char = 0;
            index_palavra++;
        }

        for(int i=0; i<index_palavra; i++)
        {
            while((conjunto[i].tamanho > conjunto[i-1].tamanho) && (i>0))
            {
                palavras temp = conjunto[i];
                conjunto[i] = conjunto[i-1];
                conjunto[i-1] = temp;
                i--;
            }
        }

        for(int i=0; i<index_palavra; i++)
        {
            printf("%s ", conjunto[i].palavra);
        }
        printf("\n");

    }


    return 0;
}