#include<stdio.h>
int main()
{
    int arr[15],i,n=5,k=0,l=0;
    for(i=0;i<15;i++)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
         for(k=0;k<n;k++)
         {
             if(arr[i]%2==0)
                printf("par[%d] = %d\n",k,arr[i]);
         }
         for(l=0;l<n;l++)
         {
           if(arr[i]%2==1)
            printf("impar[%d] = %d\n",l,arr[i]);
            l++;
         }
    }
    return 0;

}
