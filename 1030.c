#include <stdio.h>

int main()
{

    int testes; scanf("%d", &testes);
    int casos = 1;
    while(testes--)
    {
        int n, k; scanf("%d %d", &n, &k);
        int resultado = 0;
        for (int i = 2; i <= n; i++) 
        {
            resultado = (resultado + k) % i;
        }   
        printf("Case %d: %d\n", casos, resultado + 1);
        casos++;
    }

    return 0;
}