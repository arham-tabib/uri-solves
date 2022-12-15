#include<stdio.h>
int main()
{int i,j,k,l;
for(i=1,j=7;i<=9;i+=2,j+=5)
{for(k=i,l=1;l<=3;l++,j--)
{printf("I=%d J=%d\n",i,j);
}
}
return 0;
}
