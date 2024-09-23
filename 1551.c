#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n); getchar();

    while(n != 0)
    {
        char codigo[1001]; 
        scanf("%[^\n]s", codigo); getchar();

        while(n)
        {
            int tamanho = strlen(codigo);
            int soma_um = 0;
            int soma_zero = 0;

            for(int i=0; i<tamanho; i++)
            {
                while(codigo[i] == '0')
                {
                    soma_zero++;

                }
            }

            printf("%d %d\n", soma_um, soma_zero);
            scanf("%[^\n]s", codigo); getchar();
            n--;
            
        }

        scanf("%d", &n); getchar();

    }
    return 0;
}