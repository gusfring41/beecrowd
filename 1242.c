#include <stdio.h>
#include <string.h>

int complemento(char c1, char c2)
{
    if((c1 == 'B' && c2 == 'S') || (c1 == 'S' && c2 == 'B'))
    {
        return 1;
    } else if ((c1 == 'F' && c2 == 'C') || (c1 == 'C' && c2 == 'F'))
    {
        return 1;
    } else {
        return 0;
    }
}

int main()
{

    char base[301];
    while(scanf("%[^\n]s", base) != EOF)
    {
        getchar();
        int tamanho = strlen(base); int tamanho_nova_base = tamanho;
        char esquerda[tamanho]; char direita[tamanho]; char nova_base[301];
        int pivo_inicial = 1; int maior_pivo = 1;
        int contador_atual = 0; int maior_contador = 0;
        int contador_final = 0;
        
        while((tamanho_nova_base > 1) && (maior_pivo > 0))
        {
            tamanho = tamanho_nova_base;
            maior_contador = 0;
            pivo_inicial = 1; maior_pivo = 0;

            while(pivo_inicial < tamanho)
            {
                contador_atual = 0;

                for(int i=0; i<pivo_inicial; i++)
                {
                    esquerda[i] = base[i];
                }
                esquerda[pivo_inicial] = '\0';

                int index = 0;
                for(int i=pivo_inicial; i<tamanho; i++)
                {
                    direita[index] = base[i];
                    index++;
                }
                direita[index] = '\0';

                int index_esq = pivo_inicial-1;
                int index_dir = 0;

                while((index_esq >= 0) && (index_dir < tamanho) && (complemento(esquerda[index_esq], direita[index_dir])))
                {
                    index_esq--;
                    index_dir++;
                    contador_atual++;
                }

                if(contador_atual > maior_contador)
                {
                    maior_contador = contador_atual;
                    maior_pivo = pivo_inicial;
                }

                pivo_inicial++;
            }

            for(int i=0; i<(maior_pivo - maior_contador); i++)
            {
                nova_base[i] = base[i];
            }
            int index = (maior_pivo - maior_contador);
            for(int i= maior_pivo + maior_contador; i < tamanho; i++)
            {
                nova_base[index] = base[i];
                index++;
            }
            nova_base[index] = '\0';
            tamanho_nova_base = strlen(nova_base);


            for(int i=0; i<tamanho_nova_base; i++)
            {
                base[i] = nova_base[i];
            }
            base[tamanho_nova_base] = '\0';
            contador_final += maior_contador;

        }

        printf("%d\n", contador_final);
    }

    return 0;
}