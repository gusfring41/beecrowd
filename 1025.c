#include <stdio.h>

typedef struct
{
    int valor_marmore;
} marmore;
int main()
{

    int N, Q; scanf("%d %d", &N, &Q);
    int caso = 1;
    while(N || Q)
    {
        printf("CASE# %d:\n", caso);
        marmore marmores[N];

        for(int i=0; i<N; i++)
        {
            scanf("%d", &marmores[i].valor_marmore);
        }
        
        for(int i=1; i<N; i++)
        {
            int index = i;
            while((index > 0) && (marmores[index].valor_marmore < marmores[index-1].valor_marmore))
            {
                marmore temp = marmores[index];
                marmores[index] = marmores[index-1];
                marmores[index-1]= temp;
                index--;
            }
        }

        for(int i=0; i<Q; i++)
        {
            int consulta; scanf("%d", &consulta);
            int achou = 0;
            for(int j = 0; j<N; j++)
            {
                if(marmores[j].valor_marmore == consulta)
                {
                    printf("%d found at %d\n", consulta, j+1);
                    achou = 1;
                    break;
                }
            }

            if(!achou)
            {
                printf("%d not found\n", consulta);
            }
        }

        scanf("%d %d", &N, &Q);
        caso++;
    } 

    return 0;
}