#include <stdio.h>

int main(){
    int c,f;
    
    for ( c = 10; c < 101; c+=10)
    {
        printf("Valor em Celsius:");
        printf("%d ", c);
        printf("equivale ao valor em Fahrenheit:");
        f=(((9*c)/5)+32);
        printf("%d ", f);
        printf("\n");
    }
    return 0;
}