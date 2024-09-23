#include <stdio.h>

int main()
{

    int n; scanf("%d", &n);
    int teste = 1;
    while(n != 0)
    {
        int ingressos[n];
        int ganhador;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &ingressos[i]);
            if(ingressos[i] == i+1)
            {
                ganhador = i;
            }
        }
        printf("Teste %d\n%d\n\n", teste, ingressos[ganhador]);
        teste++;
        scanf("%d", &n);   
    }

    return 0;
}