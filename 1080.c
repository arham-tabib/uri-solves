#include<stdio.h>
int main()
{
   int balance,rate,time,call;
   scanf("%d %d %d",balance,rate,time);
   call=(rate*time);
   if(call>balance)
   {
       printf("recharge\n");
   }
   else if(call<=balance)
   {
       printf("call\n");
   }
    return 0;
}
