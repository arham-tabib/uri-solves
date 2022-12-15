#include <stdio.h>

int main()
{
    int n, i, j, temp;

    while(scanf("%d",&n))
    {
        if(n==0)
           break;

        int suspect[n], index[n];

        // input the value of suspects
        //and create their index
        for(i=0; i<n; i++)
        {
            scanf("%d", &suspect[i]);
             index[i]=i+1;
        }

        /* sorting suspect values
        with their index values
        by ascending order  */
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(suspect[i]>suspect[j])
                {
                    temp=suspect[i];
                    suspect[i]=suspect[j];
                    suspect[j]=temp;

                    temp= index[i];
                    index[i]= index[j];
                    index[j]=temp;
                }
            }
        }
        // displaying the index of the killer
        printf("%d\n",  index[n-2]);
    }

    return 0;
}
