#include <stdio.h>
#include <string.h>

int main()
{

    char palavra1[51], palavra2[51];
    while(scanf("%[^\n]s", palavra1) != EOF)
    {
        getchar();
        scanf("%[^\n]s", palavra2); getchar();

        int tamanho1 = strlen(palavra1);
        int tamanho2 = strlen(palavra2);
        int maior_substring = 0;

        for(int i=0; i<tamanho1; i++)
        {
            for(int j=0; j<tamanho2; j++)
            {
                int index_j = j;
                int index_i = i;
                int substring_atual = 0;
                while((palavra1[index_i] == palavra2[index_j]) && (index_j< tamanho2) && (index_i < tamanho1))
                {
                    substring_atual++;
                    index_j++;
                    index_i++;
                }

                if(substring_atual > maior_substring)
                {
                    maior_substring = substring_atual;
                }
            }
        }

        printf("%d\n", maior_substring);

    }

    return 0;
}