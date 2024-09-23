#include <stdio.h>

int main()
{

    long long int V, N; scanf("%lli %lli", &V, &N);
    long long int total_placas = V*N;

    for(int i=10; i<=90; i+=10)
    {
        double result_flt = total_placas*i/100.0;
        long long int result_int = result_flt*1;
        
        if(result_flt > result_int)
        {
           result_int++;
        }
        printf("%lli", result_int);
        
        if(i != 90)
        {
            printf(" ");
        }
        
    }
    
    printf("\n");
    
    return 0;
}