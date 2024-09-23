#include <stdio.h>

int main()
{

    int n; scanf("%d", &n);
    int turma = 1;

    while(n != 0)
    {
        int media;
        int codigo;
        int melhores_medias[n];
        int index_medias = 0;
        int melhor_media = 0;
        int total_alunos_melhor_media = 1;

        for(int i=0; i<n; i++)
        {
            scanf("%d %d", &codigo, &media);
            if(media > melhor_media)
            {
                index_medias = 0;
                total_alunos_melhor_media = 1;
                melhores_medias[index_medias] = codigo;
                melhor_media = media;

            } else if(media == melhor_media) {
                index_medias++;
                total_alunos_melhor_media++;
                melhores_medias[index_medias] = codigo;
            }
        }

        printf("Turma %d\n", turma);
        for(int i=0; i<total_alunos_melhor_media; i++)
        {
            printf("%d", melhores_medias[i]);
            if(i != (total_alunos_melhor_media-1))
            {
                printf(" ");
            }
        }
        printf("\n");

        turma++;
        scanf("%d", &n);
        
        if(n != 0)
        {
            printf("\n");
        }

    }

    return 0;
}