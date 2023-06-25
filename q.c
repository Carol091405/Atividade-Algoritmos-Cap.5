#include <stdio.h>

int main(){
    char r;
    char com[40];
    float lar,comp,a,t=0;
    int i;

    for ( i = 1; i > 0; i++)
    {
        printf("Digite o nome do comodo:");
        scanf("%s", com);
        printf("Digite a largura:");
        scanf("%f", &lar);
        printf("Digite o comprimento:");
        scanf("%f", &comp);
        a=lar*comp;
        printf("Esta e a area da(o) %s:%.2f\n", com,a);
        printf("Quer continuar inserindo novos comodos?\n");
        scanf(" %c", &r);
        if (r=='N'||r=='n')
        {
           t+=a;
           break;
        }
            t+=a;
    }
    printf("Esta e a area total:%.2f", t);
    return 0;
}