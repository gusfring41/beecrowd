#include <stdio.h>

int main()
{

    char d; char c;
    scanf("%c", &d); getchar();
    

    while(d != '0')
    {
        int total = 0;
        while (scanf("%c", &c) == 1) {  
            if(c == '\n')
            {
                break;
            }

            if((c != d) && (!((c == '0') && (total == 0))))
            {
                printf("%c", c);
                total++;
            }
            
            
        }
        if(total == 0)
        {
            printf("0");
        }
        printf("\n");
        scanf("%c", &d); getchar();
    }

    return 0;
}