#include <stdio.h>
int main(){
    int fat,a,b,c,n=0;

    printf("Escreva 15 numeros inteiros:\n");
    for ( a = 0; a < 15; a++)
    {
        scanf("%d", &b);
        fat=1;
      for ( c = b; c >= 1; c--)
      {
        fat*=c;
      }
      n+=fat;
    }
    printf("soma dos fatoriais:%d", n);
    return 0;
}
    

