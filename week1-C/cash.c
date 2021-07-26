#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float troco;
    int contador = 0;

    do
    {
        troco = get_float("Change owed: ");
    }
    while (troco < 0);
    
    int entrada = round(troco * 100);
    
    
    if (entrada >= 25)
    {
        do
        {
            entrada -= 25;
            contador += 1;
        }
        while (entrada >= 25);
    }
    if (entrada >= 10)
    {
        do
        {
            entrada -= 10;
            contador += 1;
        }
        while (entrada >= 10);
    }
    if (entrada >= 5)
    {
        do
        {
            entrada -= 5;
            contador += 1;
        }
        while (entrada >= 5);
    }
    if (entrada >= 1)
    {
        do
        {
            entrada -= 1;
            contador += 1;
        }
        while (entrada >= 1);
    }
    printf("%i \n", contador);
}
