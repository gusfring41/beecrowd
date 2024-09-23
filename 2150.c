#include <stdio.h>
#include <string.h>

int main()
{

    char vogais[1001];
    while(scanf("%s", vogais) != EOF)
    {
        getchar();
        char texto[1001]; 
        scanf("%[^\n]s", texto); getchar();

        printf("alfabeto: %s vogais: %s\n", vogais, texto);
        int tamanho_1 = strlen(texto);
        int tamanho_2 = strlen(vogais);
        int contador = 0;

        for(int i=0; i<tamanho_1; i++)
        {
            for(int j=0; j<tamanho_2; j++)
            {
                if(texto[i] == vogais[j])
                {
                    contador++;
                    continue;
                }
            }
        }

        printf("%d\n", contador);
    }

    return 0;
}