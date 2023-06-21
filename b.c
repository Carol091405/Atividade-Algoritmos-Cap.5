#include <stdio.h>

int main(){
    int c,m,e;
    c=1;
    printf("Insira o numero que deseja conhecer a tabuada:");
    scanf("%d", &m);
    printf("TABUADA DO NUMERO %d:\n", m);

    while (c<11)
    {
        e=m*c;
        printf("%d*%d=", m,c);
        printf("%d\n", e);
        c++;
    }
    return 0;
}