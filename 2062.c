#include <stdio.h>
#include <string.h>

int main()
{

    int n; scanf("%d", &n); getchar();
    while(n--)
    {
        char frase[21];
        scanf("%s", frase);
        int tamanho = strlen(frase);
        if((tamanho == 3) && (frase[0] == 'O') && frase[1] == 'B')
        {
            printf("OBI");
        } else if((tamanho == 3) && (frase[0] == 'U') && frase[1] == 'R') {
            printf("URI");
        } else {
            printf("%s", frase);
        }

        if(n > 0)
        {
            printf(" ");
        }
    }

    
    printf("\n");

    return 0;
}