#include <stdio.h>

int main(){
    int a,b;

    for ( a=15; a < 201; a++)
    {
        if (a%3==0)
        {
            b=a*a;
            printf("%d ", b);
        }  
    }
    return 0;
}