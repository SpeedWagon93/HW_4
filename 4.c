#include <stdio.h>

int main() 
{
    int n;
    printf("Введите число n больше 8: ");
    scanf("%d", &n);
    if(n <= 8)
    {
        printf("Вы ввели число не больше 8\n");
    }
    else
    {
        int product = 1;
        for (int i = 8; i <= n; i++) 
        {
            product *= i;
        }
        printf("Произведение всех чисел от 8 до %d: %d\n", n, product);
    }

    return 0;
}