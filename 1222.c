#include <stdio.h>
#include <string.h>

int main()
{

    int palavras, linhas_por_pagina, caracteres_por_linha;

    while(scanf("%d %d %d", &palavras, &linhas_por_pagina, &caracteres_por_linha) != EOF)
    {

        int total_caracteres = 0;
        int total_linhas = 0;

        for(int i=0; i < palavras; i++)
        {
            char palavra[71];
            scanf("%s", palavra);
            int tamanho = strlen(palavra);

            total_caracteres += (tamanho + 1);

            if((total_caracteres-1) > caracteres_por_linha)
            {
                total_linhas++;
                total_caracteres = tamanho + 1;
            } 
        }

        total_linhas++;

        float total = total_linhas*1.0/linhas_por_pagina;
        if(total > (total_linhas/linhas_por_pagina))
        {
            printf("%d\n", (total_linhas/linhas_por_pagina) + 1);
        } else {
            printf("%d\n", (total_linhas/linhas_por_pagina));
        }
            
    }

    return 0;
}