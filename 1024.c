#include <stdio.h>
#include <string.h>

int main()
{

    int n; scanf("%d", &n); getchar();
    while(n--)
    {   
        char palavra[1001];
        scanf("%[^\n]s", palavra); getchar();

        int tamanho = strlen(palavra);
        for(int i=0; i< tamanho; i++)
        {
            if((palavra[i] >= 65) && (palavra[i] <= 122))
            {
                palavra[i] += 3;
            }
        }

        int index = tamanho-1;
        char palavra_2[1001];

        for(int i=0; i<tamanho; i++)
        {
            palavra_2[i] = palavra[index];
            index--;
        }
        palavra_2[tamanho] = '\0';

        for(int i=tamanho/2; i< tamanho; i++)
        {
        
            palavra_2[i]--;
        }

        printf("%s\n", palavra_2);
    }
    return 0;
}