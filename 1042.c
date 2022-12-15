#include <stdio.h>

int main() {
 int x, y, z, a, b, s, Temp;
    scanf("%d %d %d", &x, &y, &z);
    a = x;
    b = y;
    s = z;
    if (a < b)

    {
        Temp = a;
        a = b;
        b = Temp;
    }
    if (b < s)
    {
        Temp = b;
        b = s;
        s = Temp;
    }

    if (a < b)
    {
        Temp = a;
        a = b;
        b = Temp;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",s,b,a,x,y,z);
    return 0;
}
