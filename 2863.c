#include<stdio.h>

int main()
{
    int n, i;

    while(scanf("%d",&n)!=EOF)
    {
        double arr[n], min;

        // input some real numbers
        for(i=0; i<n; i++)
        {
            scanf("%lf",&arr[i]);
        }

        // find out the min value
        min = arr[0];
        for(i=0; i<n; i++)
        {
            if(min>arr[i])
            {
                min = arr[i];
            }
        }

        // displaying the min value
        printf("%.2lf\n",min);
    }
    return 0;
}
