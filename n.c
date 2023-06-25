#include <stdio.h>
#include <math.h>

int main(){
    float a,s=0,q=0,m;
    
    printf("Para finalizar o calculo, digite um numero negativo!\n");
    printf("Digite os numeros positivos que deseja:\n");
    
   for (;;)
   {
    scanf("%f", &a);
    if (a<0)
    {
        break;
    }
    q++;
    s+=a;
   }
   if (q>0)
   {
    m=s/q;
    printf("Quantidade de numeros inseridos:%.2f\n", q);
    printf("Somatorio:%.2f\n", s);
    printf("Media:%.2f", m);
   }
   return 0;
}