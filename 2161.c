#include <stdio.h>

double raiz_10(double x)
{
    if(x == 0)
    {
        return 3;
    }

    x = 3 + 1/(3 + raiz_10(x-1));
    return x;
}

int main()
{

    int n; scanf("%d", &n);

    printf("%.10lf\n", raiz_10(n));

    return 0;
}