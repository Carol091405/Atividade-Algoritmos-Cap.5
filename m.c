#include <stdio.h>

int main(){
    float a[10],b=0,i,m;
    printf("Insira 10 valores:\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
        b+=a[i];
    }
    m=b/10;
    printf("Somatorio dos valores:%.2f\n", b);
    printf("Media dos valores:%.2f", m);
}