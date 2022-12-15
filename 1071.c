#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    int max,min;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        max=y;
        min=x;
    }
    else
    {
        max=x;
        min=y;
    }
    for(i=(min+1); i<max; ++i)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
