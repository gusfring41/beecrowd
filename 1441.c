#include <stdio.h>

int maior_numero;

int seq(int x)
{

    if(x > maior_numero)
    {
        maior_numero = x;
    }

    if(x == 1)
    {
        return x;
    }

    if(x%2 == 0)
    {
        x = x/2;
    } else {
        x = 3*x + 1;
    }

    return seq(x);
}

int main()
{

    int H; scanf("%d", &H);
    while(H != 0)
    {
        maior_numero = 0;
        seq(H);
        printf("%d\n", maior_numero);
        scanf("%d", &H);
    }

    return 0;

}