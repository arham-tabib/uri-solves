#include <stdio.h>

int main()
{
    int N, i, j, m, n;

    while(scanf("%d",&N))
    {
        // Exit point
        if(N==0)
            break;

        int a, N_space, H_space, arr[N][N];
        char ch1[500], ch2[500];

        /* calculating and creating
        arrays with their values*/
        for(i=0,m=1; i<N; i++,m=m*2)
        {
            for(j=0,n=m; j<N; j++,n=n*2)
            {
                arr[i][j] = n;
            }
        }
        /* here finding highest space which
        contains arr[N-1][N-1] for every
        test case. For extra space
        added 1 with highest space */
        // converting integer to string
        sprintf(ch1, "%d", arr[N-1][N-1]);
        H_space = (strlen(ch1) + 1);

        /* In the below displaying arrays */
        for(i=0,m=1; i<N; i++,m=m*2)
        {
            for(j=0,n=m; j<N; j++,n=n*2)
            {
                // finding length of every integer and
                //deducting from highest space
                sprintf(ch2, "%d", arr[i][j]);
                N_space = H_space - strlen(ch2);

                if(j==0)
                {
                    // displaying space
                    for(a=0; a<N_space-1; a++)
                        printf(" ");

                    // displaying integer
                    printf("%d",arr[i][j]);
                }
                else
                {
                    for(a=0; a<N_space; a++)
                        printf(" ");

                     printf("%d",arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

