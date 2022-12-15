#include <stdio.h>
int main()
{
    int n,i,x,y;
    double e;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d", &x, &y);
        if(y==0)
            printf("divisao impossivel\n");
        else
        {
            e=x/(y*1.00);
            printf("%.1lf\n", e);
        }
    }
    return 0;
}
