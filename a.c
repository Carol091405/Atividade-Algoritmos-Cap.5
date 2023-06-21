#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    a=15;

    while (a<201)
    {
        b=a*a;
        printf("%d ", b);
        a++;
    }
    return 0;
}