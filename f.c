#include <stdio.h>

int main(){
    int d;

    printf("Numeros divisiveis por 4:\n");

    for ( d = 1; d < 201; d++)
    {
        if (d%4==0)
        {
            printf("%d ", d);
        }   
    }
    return 0;
}