#include<stdio.h>
int main()
{
    while(1){
    int b,c;
    scanf("%d%d",&b,&c);
    if(b==0&&c==0){
        break;
    }
    else{
    printf("%d\n",b*c);
    }
    }
    return 0;
}
