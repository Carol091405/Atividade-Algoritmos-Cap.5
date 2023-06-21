#include <stdio.h>
#include <math.h>

int main(){
    int fat, i;

    for (fat; i > 1; i = i - 1)
    {
        if (i%2!=0)
        {
            fat=fat*i;
            printf("%d ", fat);
        }
        
    }
    
}