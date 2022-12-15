#include <stdio.h>
int main()
{
    int X, Y, Z, D;
    scanf("%3d.%3d.%3d-%2d", &X, &Y, &Z, &D);
    printf("%03d\n%03d\n%03d\n%02d\n", X, Y, Z, D);
    return 0;
}
