#include <stdio.h>

int fatorial(int x)
{
    if(x == 1)
    {
        return 1;
    }

    x = x*fatorial(x-1);
    return x;
}

int main()
{

    int n; scanf("%d", &n);

    printf("%d", fatorial(n));

    return 0;
}