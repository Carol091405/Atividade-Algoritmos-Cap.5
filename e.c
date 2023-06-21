#include <stdio.h>

int main(){
    int a;

    printf("Numeros impares na faixa de 1 a 20:\n");

    for ( a = 1; a < 21; a++)
    {
        if (a%2!=0)
        {
            printf("%d ", a);
        }
    }
    return 0;
}