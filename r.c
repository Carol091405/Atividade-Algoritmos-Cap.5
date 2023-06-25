#include <stdio.h>

int main(){
    float a,q=0,ma,me;
    int b;
    printf("Para finalizar a sequencia, digite um numero negativo!\n");
    printf("Digite o numero 1:");
    scanf("%f", &a);
    ma=me=a;
    
   for (b=2;b>0;b++)
   {
    printf("Digite o numero %d:", b);
    scanf("%f", &a);
    if (a<0)
    {
        break;
    }
    q++;
    
    if (a>ma)
    {
        ma=a;
    }
    if (a<me)
    {
        me=a;
    }
   }
   printf("O maior valor e:%f", ma);
   printf("O menor valor e:%f", me);

   return 0;
}