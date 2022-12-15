#include<stdio.h>
int main()
{
    int x,y=2002;
    while(1)
    {
        scanf("%d",&x);
        if(x!=y)
            printf("Senha Invalida\n");
            else if (x==y)
            {
                printf("Acesso Permitido\n");
                break;
            }

    }
    return 0;
}
