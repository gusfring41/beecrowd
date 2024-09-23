#include <stdio.h>
#include <stdlib.h>

typedef struct{
    long long int idt;
    long long int volume;
}presente;

int compare(const void *a, const void *b)
{
    presente *presenteA  = (presente *) a;
    presente *presenteB  = (presente *) b;

    if((presenteB->volume > presenteA->volume) || ((presenteB->volume == presenteA->volume) && (presenteB->idt < presenteA->idt)))
    {
        return 1;
    } else {
        return -1;
    }

}

int compare2(const void *a, const void *b)
{
    presente *presenteA  = (presente *) a;
    presente *presenteB  = (presente *) b;

    if(presenteB->idt < presenteA->idt)
    {
        return 1;
    } else {
        return -1;
    }

}



int main()
{

    int t; scanf("%d", &t);

    while(t--)
    {
        int presentes_disp, presentes_gan;
        scanf("%d %d", &presentes_disp, &presentes_gan);
        presente presentes[presentes_disp];
        presente presentes_sorted[presentes_gan];
        int index = 0;

        while(presentes_disp--)
        {
            long long int id, larg, alt, compr;
            scanf("%lli %lli %lli %lli", &id, &larg, &alt, &compr);
            long long int vol = larg*alt*compr;

            presentes[index].idt = id;
            presentes[index].volume = vol;
            index++;
        }

        qsort(presentes, index, sizeof(presente), compare);

        for(int i=0; i< presentes_gan; i++)
        {
            presentes_sorted[i] = presentes[i];
        }

        qsort(presentes_sorted, presentes_gan, sizeof(presente), compare2);

        for(int i=0; i < presentes_gan; i++)
        {
            printf("%lli", presentes_sorted[i].idt);
            if(i < presentes_gan - 1)
            {
                printf(" ");
            }
        }
        if(t > 1)
        {
            printf("\n");    
        }
    }

    return 0;
}