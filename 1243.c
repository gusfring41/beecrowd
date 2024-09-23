#include <stdio.h>
#include <string.h>

int main()
{

    char frase[51];
    while(scanf("%[^\n]s", frase) != EOF)
    {
        getchar();
        int tamanho_frase = strlen(frase);
        int total_palavras = 0;
        int tamanho_total_palavras = 0;

        for(int i=0; i<tamanho_frase; i++)
        {
            int index_i = i;
            int tamanho_palavra = 0;
            int achou_palavra = 0;

            while(((frase[index_i] >= 65) && (frase[index_i] <= 122)) && (index_i < tamanho_frase))
            {
                index_i++;
                tamanho_palavra++;
                achou_palavra = 1;
            }

            if(achou_palavra)
            {

                if(index_i >= tamanho_frase)
                {
                    total_palavras++;
                    tamanho_total_palavras += tamanho_palavra;
                    i = index_i;

                } else if(index_i < tamanho_frase-1) {

                    if((frase[index_i] == ' ') || ((frase[index_i] == '.') && (frase[index_i+1] == ' ')))
                    {
                        total_palavras++;
                        tamanho_total_palavras += tamanho_palavra;
                        i = index_i;
                    } else {
                        i = index_i+1;
                        while((frase[i] != ' ') && (i < tamanho_frase))
                        {
                            i++;
                        }
                    }

                } else {

                    if((frase[index_i] == ' ') || (frase[index_i] == '.'))
                    {
                        total_palavras++;
                        tamanho_total_palavras += tamanho_palavra;
                        i = index_i;
                    } else {
                        i = index_i+1;
                        while((frase[i] != ' ') && (i < tamanho_frase))
                        {
                            i++;
                        }
                    }
                }

            } else {
                while((frase[i] != ' ') && (i < tamanho_frase))
                {
                    i++;
                }
            }
        }

        if(total_palavras != 0)
        {
            int nivel = tamanho_total_palavras/(total_palavras);
            if(nivel <= 3)
            {
                printf("250\n");
            } else if(nivel <= 5)
            {
                printf("500\n");
            } else{
                printf("1000\n");
            }
        } else {
            printf("250\n");
        }

        
    }

    return 0;
}