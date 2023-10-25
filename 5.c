#include <stdio.h>

int main()
{
    int n = 0;
    int x = 0;
    printf("Введите число: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++)
    {
        x += (i+n)*(i+n);
    }
    printf("%d\n", x);
    return 0;
}




