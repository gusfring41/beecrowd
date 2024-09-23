#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char start;

    while(scanf("%c", &start) != EOF)
    {

        if((start == 'R') || (start == 'L') || (start == 'J'))
        {
            char soma; scanf("%c", &soma);
            char numero1[1000001]; int index = 0; char teste;

            while(scanf("%c", &teste) == 1)
            {   
                if(teste == '=')
                {
                    break;
                } else {
                    numero1[index] = teste;
                    index++;
                }
            }
            numero1[index] = '\0';
            int numero2; scanf("%d", &numero2); 
            int num1 = atoi(numero1);
            printf("%d\n", numero2- num1);
            getchar();

        } else {
            char numero1[1000001]; int index = 0; char teste2;
            numero1[index] = start; index++;

            while(scanf("%c", &teste2) == 1)
            {   
                if(teste2 == '+')
                {
                    break;
                } else {
                    numero1[index] = teste2;
                    index++;
                }
            }
            numero1[index] = '\0';

            char teste3; scanf("%c", &teste3);
            if((teste3 == 'R') || (teste3 == 'L') || (teste3 == 'J'))
            {
                char igual; scanf("%c", &igual);
                int numero2; scanf("%d", &numero2); 
                int num1 = atoi(numero1);

                printf("%d\n", numero2 - num1);
                getchar();

            } else {

                char numero2[1000001]; int index2 = 0; char teste4;
                numero2[0] = teste3; index2++;
                while(scanf("%c", &teste4) == 1)
                {   
                    if(teste4 == '=')
                    {
                        break;
                    } else {
                        numero2[index2] = teste4;
                        index2++;
                    }
                }
                numero2[index2]='\0';

                int num1 = atoi(numero1);
                int num2 = atoi(numero2);
                printf("%d\n", num1+num2);
                char teste5; scanf("%c", &teste5);
                getchar();

            }
        }

    }

    return 0;
}