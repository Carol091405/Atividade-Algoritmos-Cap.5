#include <stdio.h>

int main(){
    int c,div,dis;

    printf("Digite os respectivos valores para o divisor e dividendo desejados:\n");
    scanf("%d", &dis);
    scanf("%d", &div);

    while (div>=dis)
    {
        div-=dis;
        c++;
    }
    printf("Aqui esta o quociente:%d", c);
    return 0;
}