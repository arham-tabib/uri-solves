#include <stdio.h>

int main(){
    int x, y,n,sum, min;
    while(1){

                scanf("%d%d",&x,&y);
                if(x <= 0) break;
                if(y <= 0) break;

                if(x > y){
                     min = x;
                     x = y;
                     y = min;
                }
                sum = 0;
                for(int i = x; i <= y; i++){
                       printf("%d ",i);
                       sum += i;
                }
                printf("Sum=%d\n",sum);

    }
    return 0;
}
