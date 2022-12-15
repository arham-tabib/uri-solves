#include<stdio.h>

int main()
{
    int i, j, n, layer, l;

    while(scanf("%d",&n))
    {
        int m = 0, k = n-1, ar[n][n];

        if (n==0)
            break;

        // find out the layer of
        // Bidimentional array
        layer = n / 2;

        if (n%2!=0)
            layer++;

        // loop for creating layer
        for (l=1; l<=layer; l++)
        {
            // loop for row of the array
            for (i=m; i<=k; i++)
            {
                // loop for column of the array
                for (j=m; j<=k; j++)
                {
                    // firstly array is full
                    // filled by l=1 and then l++
                    ar[i][j] = l;
                }
            }
            /* here m and k are controlling
             starting and finishing point
             of the variable layer  */
            m++;
            k--;
        }

        // displaying array...
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                if (j==0)
                    printf("%3d",ar[i][j]);
                else
                    printf(" %3d",ar[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
