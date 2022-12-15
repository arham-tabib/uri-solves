#include<stdio.h>

int main()
{
    int n, t, min, i, store;
    min = 20;

    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        // input the number of times
        scanf("%d",&t);


        if (t < min)
        {
            min = t;
            store = i;
        }
    }
    printf("%d\n",store);

    return 0;
}
