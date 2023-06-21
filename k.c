#include <stdio.h>
#include <math.h>

int main(){
    int g,s,q;
    s=0;

    for ( q = 1; q < 65; q++)
    {
        g=(int)pow(2,(q-1));
        s=s+g;
    }
    printf("Quantidade total de grãos do tabuleiro de xadrez:%d", s);
}