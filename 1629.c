#include <stdio.h>
#include <string.h>

int main()
{

    int n; scanf("%d", &n); getchar();

    while(n)
    {
        char codigo[1001];
        scanf("%[^\n]s", codigo); getchar();
        int tamanho = strlen(codigo);
        int total_zero = 0;
        int total_um = 0;
        
        for(int i=0; i<tamanho; i++)
        {
            int numero = codigo[i] - '0';
            if(i%2 == 0)
            {
                total_zero += numero;
            } else {
                total_um += numero;
            }
        }
        
        if(total_zero > 10)
        {

            int total_zero_comp = total_zero;
            total_zero = 0;
            while(total_zero_comp > 0)
            {
                int digito = total_zero_comp%10;
                total_zero_comp /= 10;
                total_zero += digito;
            }
        }
        
        if(total_um > 10)
        {
            
            int total_um_comp = total_um;
            total_um = 0;
            while(total_um_comp > 0)
            {
                int digito = total_um_comp%10;
                total_um_comp /= 10;
                total_um += digito;
            }
        }

        printf("%d\n", total_zero + total_um);
        n--;

        if(n == 0)
        {
            scanf("%d", &n); getchar();
        }
        
    }

    return 0;
}