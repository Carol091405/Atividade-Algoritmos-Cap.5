#include <stdio.h>

int main(){
    int ATUAL=0, ANTERIOR=1, PROXIMO,c;

    for ( c=0; c<16; c++)
    {
        printf("%d ", ATUAL);
        PROXIMO=ANTERIOR+ATUAL;
        ANTERIOR=ATUAL;
        ATUAL=PROXIMO;
    }
    return 0;
}