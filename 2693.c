#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[51];
    char direcao;
    int dist;
}aluno;

int compara(const void *a, const void*b)
{
    aluno *alunoA = (aluno* )a;
    aluno *alunoB = (aluno* )b;

    if(alunoA->dist > alunoB->dist)
    {
        return 1;
    } else if((alunoA->dist == alunoB->dist) && (alunoA->direcao > alunoB->direcao)) {
        return 1;
    } else if((alunoA->dist == alunoB->dist) && (alunoA->direcao == alunoB->direcao) && (strcmp(alunoA->nome, alunoB->nome) < 0)) {
        return 1;
    } else {
        return -1;
    }
}

int main()
{
    int n; 
    while(scanf("%d", &n) != EOF)
    {
        aluno alunos[n];
        for(int i=0; i<n; i++)
        {
            scanf("%s %c %d", alunos[i].nome, &alunos[i].direcao, &alunos[i].dist);
        }

        qsort(alunos, n, sizeof(aluno), compara);

        for(int i=0; i<n; i++)
        {
            printf("%s\n", alunos[i].nome);
        }
        
    }


    return 0;
}