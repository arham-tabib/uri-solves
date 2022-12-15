#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d %d",&a,&b);
    if(a>=0||b<=0)
    {
    if(a<b)
    {
        for(i=a;i<=b;i++)
        {
            sum=sum+i;
        }
        printf("%d\n",sum);
    }
    else if(b<a)
    {
        for(i=b;i<=a;i++)
        {
            sum=sum+i;
        }
        printf("%d\n",sum);
    }

}
return 0;
}
