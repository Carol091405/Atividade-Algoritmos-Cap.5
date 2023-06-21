#include <stdio.h>
#include <math.h>

int main(){
    int x,y;

    printf("Potências de base 3:\n");

    for ( x=0; x<16; x++)
    {
        y=(int)(pow(3,x));
        printf("%d ", y);
    }
    return 0;
}