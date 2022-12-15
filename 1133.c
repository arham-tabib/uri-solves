#include<stdio.h>
int main()
{
    int x,y,i;
    int max,min;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        max=x;
        min=y;
    }
    else
    {
        max=y;
        min=x;
    }
    for(i=(min+1); i<max; i++)
    {
        if(i%5==2||i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
