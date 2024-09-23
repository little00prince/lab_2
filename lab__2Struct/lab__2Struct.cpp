#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

struct Figures
{
    float area;
    float volume;
    int type;
    union {
        struct {
            float a;
            float diagonal;
        }cube;
        struct {
            float r;
            float d;
        }ball;
        struct {
            float b;
            int view;
        }tetrapyramid;
    }figure;
};

Figures first, * second = NULL;

int main()
{
    setlocale(LC_ALL, "Rus");

}

//Защита на целые числа
int block_i(int min, int max)
{
    int type, f = 1;
    do {
        if (f != 1)
        {
            printf("Такого варианта нет. Попробуйте ещё раз: ");
        }
        while (scanf("%d", &type) != 1)
        {
            while (getchar() != '\n');
            printf("Ошибка. Попробуйте ещё раз: ");
        }
        f = 0;
        while (getchar() != '\n');
    } while (type<min || type>max);
    printf("\n");
    return type;
}
//Защита на дробные числа
float block_f()
{
    int f = 1;
    float e;
    do {
        if (f != 1)
        {
            printf("Такого варианта нет. Попробуйте ещё раз: ");
        }
        while (scanf("%f", &e) != 1)
        {
            while (getchar() != '\n');
            printf("Ошибка. Попробуйте ещё раз: ");
        }
        f = 0;
        while (getchar() != '\n');
    } while (e <= 0);
    printf("\n");
    return e;
}

