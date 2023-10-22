#include <stdio.h>

enum Season {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

int main() {
    int month;
    printf("Введите номер месяца: ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Ошибка: введено неверное значение месяца\n");
    } else {
        enum Season season;
        if (month >= 3 && month <= 5) {
            season = SPRING;
        } else if (month >= 6 && month <= 8) {
            season = SUMMER;
        } else if (month >= 9 && month <= 11) {
            season = AUTUMN;
        } else {
            season = WINTER;
        }

        switch (season) {
            case SPRING:
                printf("Весна\n");
                break;
            case SUMMER:
                printf("Лето\n");
                break;
            case AUTUMN:
                printf("Осень\n");
                break;
            case WINTER:
                printf("Зима\n");
                break;
        }
    }

    return 0;
}