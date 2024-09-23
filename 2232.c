#include <stdio.h>

long long int triangulo(long long int x)
{
    if(x == 1)
    {
        return 1;
    }

    x = 2*(triangulo(x-1)) + 1;
    printf("%lli\n", x);
    return x;
}

int main()
{

    int T; scanf("%d", &T);
    while(T--)
    {
        long long int n; scanf("%lli", &n);
        printf("%lli\n", triangulo(n));
    }

    return 0;
}