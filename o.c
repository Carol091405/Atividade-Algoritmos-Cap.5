#include <stdio.h>
#include <math.h>

int main(){
    int fat,i;

    for ( i = 1; i < 11; i++)
    {
        if (i%2!=0)
        {
            fat=1;
            for ( int h = i; h > 0; h--)
            {
                fat*=h;
            }
            printf("O fatorial do numero %d equivale a:%d\n", i, fat);
            
            
        }
        
    }
    
}