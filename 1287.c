#include <stdio.h>
#include <string.h>

int main()
{


    char teste[51];
    while(scanf("%[^\n]s", teste) != EOF)
    {
        getchar();

        int tamanho_string = strlen(teste);
        char numero[51]; int index_numero = 0;

        for(int i=0; i<tamanho_string; i++)
        {
            if((teste[i] >= 48) && (teste[i] <= 57))
            {
                numero[index_numero] = teste[i];
                index_numero++;
            } else if((teste[i] == 'O') || (teste[i] == 'o')) {
                numero[index_numero] = '0';
                index_numero++;
            } else if(teste[i] == 'l') {
                numero[index_numero] = '1';
                index_numero++;
            } else if((teste[i] != ',') && (teste[i] != ' ')) {
                index_numero = 0;
                break;
            }
        }

        numero[index_numero] = '\0';

        unsigned long long int numero_int = 0;
        int pot_10 = 1;
        int indice_potencia = 0;
        int inicio = 0;

        while(numero[inicio] == '0')
        {
            inicio++;
        }

        for(int i = (index_numero-1); i > inicio; i--)
        {
            pot_10 *= 10; indice_potencia++;
        }

        if(indice_potencia > 9)
        {
            index_numero = 0;
        } else if((indice_potencia == 9) && (numero[inicio] > 50)) {
            index_numero = 0;
        }
        

        for(int i=inicio; i<index_numero; i++)
        {
            numero_int += (numero[i] - '0')*pot_10;
            pot_10 /= 10; 
        }

        if(numero_int > 2147483647)
        {
            index_numero = 0;
        }

        if(index_numero)
        {
            printf("%lli", numero_int);
        } else {
            printf("error");
        }
        printf("\n");
    }

    return 0;
}