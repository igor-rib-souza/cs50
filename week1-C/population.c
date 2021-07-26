#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //variables declaration
    int start = 0;
    int end = 0;
    int contador = 0;
    //prompt until start population is greater or equal to 9
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    
    //prompt until end population is greater or equal to start
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    
    if (end > start)
    {
        do
        {
            int born = start / 3;
            int dead = start / 4;
            start -= dead;
            start += born;
            contador += 1;
        }
        while (start < end);
    }
    
    // TODO: Print number of years
    printf("Years: %i", contador);
}