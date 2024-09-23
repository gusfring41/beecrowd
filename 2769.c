#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int ent1, ent2; scanf("%d %d", &ent1, &ent2);
    int linha1[n], linha2[n], linhat1[n-1], linhat2[n-1];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &linha1[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d", &linha2[i]);
    }

    for(int i=0; i<n-1; i++)
    {
        scanf("%d", &linhat1[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        scanf("%d", &linhat2[i]);
    }

    int sai1, sai2; scanf("%d %d", &sai1, &sai2);
    linha1[0] += ent1; linha2[0] += ent2;
    linha1[n-1] += sai1; linha2[n-1] += sai2;
    int i = 0; int j = 1;

    while(j < n)
    {
        if((j > 0) && (i == 0))
        {

            if(linha1[j-1] < (linhat2[j-1] + linha2[j-1]))
            {
                linha1[j] += linha1[j-1];
            } else {
                linha1[j] += (linhat2[j-1] + linha2[j-1]);
            }

            i = 1;

        } else if((j > 0) && (i == 1)) {

            if(linha2[j-1] < (linhat1[j-1] + linha1[j-1]))
            {
                linha2[j] += linha2[j-1];
            } else {
                linha2[j] += (linhat1[j-1] + linha1[j-1]);
            }

            i = 0;
            j++;
        }
        
    }

    printf("%d", (linha1[n-1] < linha2[n-1]) ? linha1[n-1] : linha2[n-1]);
    return 0;
}