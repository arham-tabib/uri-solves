#include<stdio.h>

int main()
{
    int n, i, j;

    while(scanf("%d",&n)!=EOF)
    {
        int arr[n][n];
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
               arr[i][j] = 3;
            }
        }


        for (i=0; i<n; i++)
        {
            arr[i][i]=1;
        }

        // and then last step fill up by 2
        //diagonally which has different cofactor
        for (i=0, j=n-1; i<n; i++, j--)
        {
            arr[i][j]=2;
        }

        // displaying....
        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                printf ("%d",arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
