#include <stdio.h>
#include <math.h>

int main(){
    int b,e,t,x;
    printf("Insira os respectivos valores para a base e o expoente desejados:\n");
    scanf("%d", &b);
    scanf("%d", &e);

    for (x=0;x<e; x++)
    {
       t=b*b;
    }
    printf("Resultado da exponeciacao:%d", t);
    return 0;
}
   