#include <stdio.h>

unsigned long long int graos(unsigned long long int x)
{

    if(x == 1)
    {
        return 1;
    }
    return graos(x-1) * 2;
}

int main()
{

    int n; scanf("%d", &n);
    while(n--)
    {
        unsigned long long int c; scanf("%llu",&c);
        printf("%llu kg\n", graos(c)/6000);
    }

    return 0;
}