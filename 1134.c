#include<stdio.h>
int main()
{
    unsigned int n,i,alcool=0,gasolin=0,diesel=0;
    for(i=1; ;i++)
    {
        scanf("%d",&n);
        if(n==1)
            alcool+=1;
        else if(n==2)
            gasolin+=1;
        else if(n==3)
            diesel+=1;
        else if(n==4)
            break;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alcool,gasolin,diesel);
    return 0;
    }
