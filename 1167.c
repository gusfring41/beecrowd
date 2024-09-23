#include <stdio.h>

typedef struct 
{
    char nome[31];
    int pontuacao;
} crianca;


int elimina(crianca vetor_criancas[], int qnt_criancas, int index_inicio, int passo)
{

    if(qnt_criancas == 2)
    {
        if(passo%2 == 0)
        {
            printf("Vencedor(a): %s\n", vetor_criancas[index_inicio].nome);
        } else {
            printf("Vencedor(a): %s\n", vetor_criancas[(!index_inicio)].nome);
        }
        return 0;
    }

    crianca novo_vetor_criancas[qnt_criancas-1];
    int index_novo_vetor = 0;
    int index_eliminado;
    
    if(passo%2 != 0)
    {
        index_eliminado = (index_inicio + passo - 1)%qnt_criancas;
    } else {
        index_eliminado = (index_inicio - passo + 1)%qnt_criancas;
        if(index_eliminado < 0)
        {
            index_eliminado += qnt_criancas;
        }
    }

    for(int i=0; i<qnt_criancas; i++)
    {
        if(i != index_eliminado)
        {
            novo_vetor_criancas[index_novo_vetor] = vetor_criancas[i];
            index_novo_vetor++;
        } 
    }

    int novo_inicio;

    if(vetor_criancas[index_eliminado].pontuacao%2 != 0)
    {
        if(index_eliminado == qnt_criancas-1)
        {
            novo_inicio = 0;
        } else {
            novo_inicio = index_eliminado;
        }
    } else {
        if(index_eliminado == 0)
        {
            novo_inicio = qnt_criancas-2;
        } else {
            novo_inicio = index_eliminado-1;
        }
    }

    return elimina(novo_vetor_criancas, qnt_criancas-1, novo_inicio, vetor_criancas[index_eliminado].pontuacao);

}

int main()
{

    int n; scanf("%d", &n); getchar();

    while(n != 0)
    {

        crianca criancas[n];

        for(int i=0; i<n; i++)
        {
            scanf("%s %d", criancas[i].nome, &criancas[i].pontuacao); getchar();
        }

        if(n == 1)
        {
            printf("Vencedor(a): %s\n", criancas[0].nome);
        } else {
            if(criancas[0].pontuacao%2 != 0)
            {
                elimina(criancas, n, 1, criancas[0].pontuacao);
            } else {
                elimina(criancas, n, n - 1, criancas[0].pontuacao);
            }    
        }

        scanf("%d", &n);     
    }

    return 0;
}