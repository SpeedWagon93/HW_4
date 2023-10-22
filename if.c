#include <stdio.h>

int main()
{
    int outer = 5;

    for(int i = 1; i <= outer; i++)
    {
        for (int k = 1; k <= outer - i; k++) 
        {
            printf(" ");
        }
        for(int j = i; j >= 1; j--)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}

