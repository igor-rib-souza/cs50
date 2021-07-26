#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura;
    int contador = 0;
    
    do
    {
        altura = get_int("Height: ");
    }
    while (altura < 1 || altura > 8);
    
    int j = altura - 1;
    
    
    
    do
    {
        
        int x = j;
        int i = -1;
        do
        {
            if (x > 0)
            {
                printf(" ");
            }
            
            x -= 1;
        }
        while (x > 0);
        
        j -= 1;
        do
        {
            printf("#");
            i += 1;
        }
        while (i != contador);
        printf("\n");
        contador += 1;
    }
    while (contador != altura);
}