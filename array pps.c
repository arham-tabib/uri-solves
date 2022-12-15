#include<stdio.h>
int main()
{
    int arr[200],i,n,sum=0;
    scanf("%d",&n);//6
    for(i=0;i<n;i++)//0,1,2
    {
        scanf("%d",&arr[i]);//12,1,

    if(arr[i]<=0)
    {
        arr[i]=1;
    }
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    printf("%d\n",sum);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
