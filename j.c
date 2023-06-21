#include <stdio.h>

int main(){
    int c,f;
    printf("Valores em Celsius:\n");

    for ( c = 10; c < 101; c++)
    {
        if (c%10==0)
        {
            printf("Valores em Fahrenheit:\n");
            f=(((9*c)/5)+32);
            printf("%d ", f);
        }
    }
    
}