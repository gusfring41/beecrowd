#include <stdio.h>

typedef long int li;

int main()
{

    int N;
    while(scanf("%d", &N) != EOF)
    {  
    
        int M, L;
        scanf("%d %d", &M, &L);

        li cartas_marcos[M][N]; li cartas_leonardo[L][N];

        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                scanf("%ld", &cartas_marcos[i][j]);
            }
        }

        for(int i=0; i<L; i++)
        {
            for(int j=0; j<N; j++)
            {
                scanf("%ld", &cartas_leonardo[i][j]);
            }
        }

        int carta_marcos, carta_leonardo, atributo;
        scanf("%d %d", &carta_marcos, &carta_leonardo); carta_marcos--; carta_leonardo--; 
        scanf("%d", &atributo); atributo--;

        if(cartas_marcos[carta_marcos][atributo] > cartas_leonardo[carta_leonardo][atributo])
        {
            printf("Marcos\n");
        } else if(cartas_marcos[carta_marcos][atributo] < cartas_leonardo[carta_leonardo][atributo]) {
            printf("Leonardo\n");
        } else {
            printf("Empate\n");
        }
        scanf("%d", &N); 
    }

    return 0;
}