#include <stdio.h>

int main(){
    int v,s;
    v=2;
    s=0;

    while (v<501)
    {
        if (v%2==0)
        {
            s = s + v;
        }  
        v++;
    }
    printf("Soma dos numeros pares de 1 a 500:%d", s);
    return 0;
}