#include <stdio.h>

typedef struct{
    int identificador;
    int vitorias;
    int pontos_feitos;
    int pontos_recebidos;
}time;

int main()
{

    int n; 
    int instancia = 1;

    while(1)
    {
        
        scanf("%d", &n);
        
        if(instancia > 1)
        {
            printf("\n");
        }
        
        if(n == 0)
        {
            break;
        }
        
        int total_jogos = n*(n-1)/2;
        time times[n];

        for(int i=0; i<n; i++)
        {
            times[i].identificador = i+1;
            times[i].vitorias = 0;
            times[i].pontos_feitos = 0;
            times[i].pontos_recebidos = 0;
        }

        while(total_jogos--)
        {
            int time1, pontos1, time2, pontos2;
            scanf("%d %d %d %d", &time1, &pontos1, &time2, &pontos2);

            times[time1-1].pontos_feitos += pontos1;
            times[time2-1].pontos_feitos += pontos2;

            times[time1-1].pontos_recebidos += pontos2;
            times[time2-1].pontos_recebidos += pontos1;

            if(pontos1 > pontos2)
            {
                times[time1-1].vitorias += 2;
                times[time2-1].vitorias += 1;

            } else {
                times[time1-1].vitorias += 1;
                times[time2-1].vitorias += 2;
            }
        }

        for(int i=1; i<n; i++)
        {
            int index = i;
            float average1, average2;

            if(times[index-1].pontos_recebidos > 0)
            {
                average1 = times[index-1].pontos_feitos*1.0/times[index-1].pontos_recebidos;
            } else {
                average1 = times[index-1].pontos_feitos*1.0;
            }
            
            if(times[index].pontos_recebidos > 0)
            {
                average2 = times[index].pontos_feitos*1.0/times[index].pontos_recebidos;
            } else {
                average2 = times[index].pontos_feitos*1.0;
            }

            while((index > 0) && ((times[index].vitorias > times[index-1].vitorias) || ((times[index].vitorias == times[index-1].vitorias) && (average2 > average1)) || ((times[index].vitorias == times[index-1].vitorias) && (average2 == average1) && (times[index].identificador < times[index-1].identificador))))
            {
                time temp = times[index];
                times[index] = times[index-1];
                times[index-1] = temp;
                index--;

                if(index > 0)
                {
                    if(times[index-1].pontos_recebidos > 0)
                    {
                        average1 = times[index-1].pontos_feitos*1.0/times[index-1].pontos_recebidos;
                    } else {
                        average1 = times[index-1].pontos_feitos*1.0;
                    }
                    
                    if(times[index].pontos_recebidos > 0)
                    {
                        average2 = times[index].pontos_feitos*1.0/times[index].pontos_recebidos;
                    } else {
                        average2 = times[index].pontos_feitos*1.0;
                    }

                }
                
            }
        }

        printf("Instancia %d\n", instancia);
        for(int i=0; i<n; i++)
        {
            printf("%d", times[i].identificador);
            if(i < n-1)
            {
                printf(" ");
            }
        }
        printf("\n");
        
        instancia++;
       
    }

}