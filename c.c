#include <stdio.h>

int main(){
    int i,a;
    i=1;
    a=0;

    while (i<101)
    {
        a=a+i;
        i++;
    }
    printf("A soma de 1 até 100 equivale a:%d", a);
    return 0;
}