#include <stdio.h>

void main()
{
    int i; 
    for (i = 0; i <= 100; i++)
    {
        if(i%3 == 0)
        {
            printf("Fizz \n");
        }
        else if(i%5 == 0)
        {
            printf("Buz \n");
        }
        else 
        {
            printf("%d \n", i);
        }
    }
}