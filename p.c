#include <stdio.h>

int main(){
    int a,b,m;
    b=0;

    for ( a = 50; a < 71; a++)
    {
        if (a%2==0)
        {
            b+=a;
        }
    }
    printf("Soma dos pares na faixa de 50 a 70:%d\n", b);
    m=b/11;
    printf("Media dos pares na faixa de 50 a 70:%d", m);
    return 0;
}