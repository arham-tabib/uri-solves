#include <stdio.h>

int main() {

   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a >= b+c) printf("Invalido\n");
    else
    {
        if(a==b && b==c) printf("Valido-Equilatero\n");
        else if(a!=b && b!=c && a!=c) printf("Valido-Escaleno\n");
        else printf("Valido-Isoceles\n");
        if(a*a == (b*b + c*c)) printf("Retangulo: S\n");
        else printf("Retangulo: N\n");
    }

    return 0;
}
