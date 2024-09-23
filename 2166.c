#include <stdio.h>

double raiz_2(double x)
{

    if(x == 0)
    {
        return 1;
    }

    x = 1 + 1/(1+raiz_2(x-1));
    return x;
}

int main()
{
    double n; scanf("%lf", &n);
    printf("%.10lf", raiz_2(n));
    return 0;
}