#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[51];
    char frequencia[51];

}aluno;

int main()
{

    int t; scanf("%d", &t);
    while(t--)
    {

        int n; scanf("%d", &n);
        aluno alunos[n];

        for(int i=0; i<n; i++)
        {
            scanf("%s", alunos[i].nome);
        }

        for(int i=0; i<n; i++)
        {
            scanf("%s", alunos[i].frequencia);
        }

        int primeiro_aluno = 1;

        for(int i=0; i<n; i++)
        {
            int total_aulas = 0;
            int presenca = 0;

            int tamanho_frequencia = strlen(alunos[i].frequencia);

            for(int j=0; j< tamanho_frequencia; j++)
            {
                if(alunos[i].frequencia[j] == 'P')
                {
                    presenca++; total_aulas++;
                } else if(alunos[i].frequencia[j] == 'A') {
                    total_aulas++;
                }
            }

            if(presenca*1.0/total_aulas < 3*1.0/4)
            {
                if(primeiro_aluno)
                {
                    printf("%s", alunos[i].nome);
                    primeiro_aluno = 0;
                } else {
                    printf(" %s", alunos[i].nome);
                }
            } 
        }
        printf("\n");

    }

    return 0;
}