#include <stdio.h>

int main(){
    float i,m,a,b=0;
    printf("Insira 10 valores:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%f", &a);
        b+=a;
    }
    m=b/10;
    printf("Somatorio dos valores:%.2f\n", b);
    printf("Media dos valores:%.2f", m);
    return 0;
}