#include <stdio.h>

int chamadas;

int fibo(int x)
{

    chamadas++;

    if(x == 1)
    {
        return 1;
    }

    if(x == 0)
    {
        return 0;
    }

    return fibo(x-1) + fibo(x-2);
}


int main()
{

    int testes; scanf("%d", &testes);

    while(testes--)
    {
        chamadas = 0;
        int n; scanf("%d", &n);
        int result = fibo(n);
        printf("fib(%d) = %d calls = %d\n", n, chamadas-1, result);
    }

    return 0;
}