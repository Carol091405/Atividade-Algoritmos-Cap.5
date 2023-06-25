#include <stdio.h>
#include <math.h>

int main(){
    int q;
    float g=1,s=0;

    for ( q = 1; q < 65; q++)
    {
        s+=g;
        g*=2;
    }
    printf("Quantidade total de grãos do tabuleiro de xadrez:%f", s);
    return 0;
}