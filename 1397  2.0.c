#include <stdio.h>

int main()
{
    int x;
a:
    scanf("%d", &x);
    while (x != 0)
    {
        int score[2];
        score[0] = 0;
        score[1] = 0;
        for (int i = 0; i < x; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if (a > b)
                score[0] += 1;
            else if (b > a)
                score[1] += 1;
        }
        printf("%d %d\n", score[0], score[1]);
        goto a;
    }
    return 0;
}
