#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n;
    char out = '#';
    int dots;

    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);
      
    for(int i = 1; i <= n; i++)
    {
        for(dots = n - i; dots >= 1; dots--)
        {
            printf(" ");
        }

    for (int j = 1; j <= i; j++)
    {
        printf("%c", out);
    }
    printf(" ");    
    for (int k = 1; k <= i; k++)
    {
        printf("%c", out);
    }
    printf("\n");
    }
}
