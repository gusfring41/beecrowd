#include <stdio.h>

long int soma = 0;

long long int fatorial(long long int X)
{

    
    if(X == 0)
    {
        return 1;
    } else {
        return X*fatorial(X-1);
    }

}

int main()
{

    long long int N, M;
    long long int soma_total;
    soma_total = 0;

    while(scanf("%lli %lli", &N, &M) != EOF)
    {
        soma_total = fatorial(N) + fatorial(M);
        printf("%lli\n", soma_total);
    }

    return 0;
}