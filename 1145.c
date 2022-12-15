#include<stdio.h>
int main()
{
    int x,y,i,j,k=1;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
    {
        for(j=1;j<=x;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
        if(k==y+1)
            break;
    }
    return 0;
}
