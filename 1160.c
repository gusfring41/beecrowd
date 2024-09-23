#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    while(n)
    {
        int A, B; scanf("%d %d", &A, &B);
        double G1_p, G2_p; scanf("%lf %lf", &G1_p, &G2_p);
        double G1 = 1.0 + (G1_p/100.0);
        double G2 = 1.0 + (G2_p/100.0);
        int tempo = 0;

        while((A<=B) && (tempo <= 100))
        {
            A *= G1;
            B *= G2;
            tempo++; 
        }

        
        if(tempo >100)
        {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", tempo);
        }
        n--;
    }

    return 0;
}