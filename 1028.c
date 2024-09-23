#include <stdio.h>


int pilha(int x, int y)
{
    if(x == 0)
    {
        return y;
    }
    return pilha(y%x, x);

}

int main()
{

    int n; scanf("%d", &n);
    while(n--)
    {
        
        int a, b; scanf("%d %d", &a, &b);
        if(a <= b)
        {
            printf("%d\n", pilha(a, b));
        } else {
            printf("%d\n", pilha(b, a));
        }

        
    }

    return 0;
}