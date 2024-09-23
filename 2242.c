#include <stdio.h>
#include <string.h>

int main()
{
    char linha[51]; char vogais_linha[51]; int index_vogais = 0;
    scanf("%s", linha);
    char vogais[6] = "aeiou";
    for(int i=0; i<strlen(linha); i++)
    {
        int vogal = 0;
        for(int j=0; j<strlen(vogais); j++)
        {
            if(linha[i] == vogais[j])
            {
                vogal = 1;
            }
        }
        if(vogal)
        {
            vogais_linha[index_vogais] = linha[i];
            index_vogais++;
        }
    }
    vogais_linha[index_vogais] = '\0';
    int tamanho = strlen(vogais_linha);
    int verificador = 1; index_vogais = 0;
    for(int i=0; i< tamanho/2; i++)
    {
        if(vogais_linha[index_vogais+i] != vogais_linha[(tamanho-1)-i])
        {
            verificador = 0;
        }
    }

    if(verificador)
    {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}