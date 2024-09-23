#include <stdio.h>

int main()
{

    int n; scanf("%d", &n); getchar();

    while(n--)
    {
        char caractere;
        int contador_leds = 0;
        while(scanf("%c", &caractere) == 1)
        {

            if(caractere == '\n')
            {
                break;
            }

            switch(caractere)
            {
                case '0':
                    contador_leds += 6;
                    break;
                case '1':
                    contador_leds += 2;
                    break;
                case '2':
                    contador_leds += 5;
                    break;
                case '3':
                    contador_leds += 5;
                    break;
                case '4':
                    contador_leds += 4;
                    break;
                case '5':
                    contador_leds += 5;
                    break;
                case '6':
                    contador_leds += 6;
                    break;
                case '7':
                    contador_leds += 3;
                    break;
                case '8':
                    contador_leds += 7;
                    break;
                case '9':
                    contador_leds += 6;
                    break;
            }

        }

        printf("%d leds\n", contador_leds);
    }




    return 0;
}