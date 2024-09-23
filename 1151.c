#include <stdio.h>

int fibo(int x, int vetor_fibo[])
{
    if(x == 1)
    {
        vetor_fibo[x] = 1;
        return vetor_fibo[x];

    } else if(x==0){
        vetor_fibo[x] = 0;
        return vetor_fibo[x];
    }

    if(vetor_fibo[x] != -1)
    {
        return vetor_fibo[x];
    }

    vetor_fibo[x] = fibo(x-1, vetor_fibo) + fibo(x-2, vetor_fibo);
    return vetor_fibo[x];
    
}

int main()
{
    int n; scanf("%d", &n);
    int vetor_fibo[n];

    for(int i=0; i<n; i++)
    {
        vetor_fibo[i] = -1;
    }

    fibo((n-1), vetor_fibo);

    for(int i=0; i<n; i++)
    {
        printf("%d ", vetor_fibo[i]);
    }

}