#include <stdio.h>

int main()
{

    int n; 
    while(scanf("%d", &n) != EOF)
    {
        float votos[n];
        float total = 0;

        for(int i=0; i<n; i++)
        {
            scanf("%f", &votos[i]);
            total += votos[i];
        }

        if((total/n*1.0) >= 2/3.0 )
        {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }

    }
    
    return 0;
}