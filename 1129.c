#include <stdio.h>

int main()
{
    int i, n, a, b, c, d, e;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;

        for(i=0; i<n; i++)
        {
            int l=0, t=0;

            scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

            if(a <= 127)
                t++;
            if(b <= 127)
                t++;
            if(c <= 127)
                t++;
            if(d <= 127)
                t++;
            if(e <= 127)
                t++;
            if(t == 1)
            {
                if(a <= 127)
                {
                    printf("A\n");
                }
                else if(b <= 127)
                {
                    printf("B\n");
                }
                else if(c <= 127)
                {
                    printf("C\n");
                }
                else if(d <= 127)
                {
                    printf("D\n");
                }
                else if(e <= 127)
                {
                    printf("E\n");
                }
            }
            else
            {
                printf("*\n");
            }
        }
    }

    return 0;
}


