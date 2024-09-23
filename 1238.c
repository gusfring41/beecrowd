#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    while(n--)
    {
        char palavra1[51], palavra2[51];
        char palavra_combinada[102];
        scanf("%s %s", palavra1, palavra2);
        int tamanho1 = strlen(palavra1); int tamanho2 = strlen(palavra2);
        int menor_tamanho = tamanho1 < tamanho2 ? tamanho1 : tamanho2;
        int maior_tamanho = tamanho1 >= tamanho2 ? tamanho1 : tamanho2;
        int index1 = 0, index2 = 0;

        for(int i=0; i<menor_tamanho*2; i++)
        {
            if(i%2==0)
            {
                palavra_combinada[i] = palavra1[index1];
                index1++;
            } else {
                palavra_combinada[i] = palavra2[index2];
                index2++;
            }
        }

        char maior_palavra[51]; int index3;
        if(tamanho1 < tamanho2)
        {
            strcpy(maior_palavra, palavra2);
            index3 = index2;
        } else {
            strcpy(maior_palavra, palavra1);
            index3 = index1;
        }

        for(int i=menor_tamanho*2; i<(menor_tamanho*2 + maior_tamanho); i++)
        {
            palavra_combinada[i] = maior_palavra[index3];
            index3++;
        }
        palavra_combinada[menor_tamanho*2 + maior_tamanho] = '\0';
        printf("%s\n", palavra_combinada);

    }

}