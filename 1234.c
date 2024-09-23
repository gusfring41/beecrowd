#include <stdio.h>
#include <string.h>

int main()
{
    char frase[51];
    while(scanf("%[^\n]", frase) != EOF)
    {
        getchar();
        int tamanho = strlen(frase);
        int inicio = 0; int acho = 0;

        while((inicio < tamanho) && (!acho))
        {
            if((frase[inicio] >= 65) && (frase[inicio] <= 122))
            {
                if(frase[inicio] >= 97)
                {
                    frase[inicio] -= 32;
                }
                acho = 1;
            } else {
                inicio++;
            }
        }
            

        for(int i=inicio+1; i<tamanho; i++)
        {
            int caixa_baixa = 0;

            if(frase[i-1] >= 65 && frase[i-1] <= 90)
            {
                caixa_baixa = 1;
            } 

            if((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && (frase[i] <= 122)))
            {
                if((frase[i] <= 90) && (caixa_baixa))
                {
                    frase[i] += 32;
                } else if((frase[i] >= 97) && (!caixa_baixa)){
                    frase[i] -= 32;
                }
            } else {
                while((i<tamanho) && ((frase[i] < 65 || frase[i] > 90) && (frase[i] < 97 || frase[i] > 122)))
                {
                    i++;
                }
                if((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && (frase[i] <= 122)))
                {
                    if((frase[i] <= 90) && (caixa_baixa))
                    {
                        frase[i] += 32;
                    } else if((frase[i] >= 97) && (!caixa_baixa)){
                        frase[i] -= 32;
                    }
                }
            }
        }

        printf("%s\n", frase);
    }
    return 0;
}