#include <iostream>

class figure
{
protected:
    float area;
    float volume;
    figure();
    ~figure();
public:
    float get_area();
    float get_volume();
};
//Конструктор
figure::figure()
{
    area = 0;
    volume = 0;
}
//Деструктор
figure::~figure()
{

}
//Вывод площади
float figure::get_area()
{
    return area;
}
//Вывод периметра
float figure::get_volume()
{
    return volume;
}

//<---куб--->
class cube : public figure
{
    float a;
    float diagonal;
public:
    void set_a(float e);
    void work_cube();
    float get_diagonal();
};
//Ввод стороны
void cube::set_a(float e)
{
    a = e;
}
//Обработка данных
void cube::work_cube()
{
    diagonal = sqrtf(3) * a;
    area = powf(a, 2) * 6;
    volume = powf(a, 3);
}
//Вывод диагонали
float cube::get_diagonal()
{
    return diagonal;
}

//<---шар--->
class ball : public figure
{
    float r;
    float d;
public:
    void set_r(float e);
    void work_ball();
    float get_d();
};
//Ввод радиуса
void ball::set_r(float e)
{
    r = e;
}
//Обработка данных
void ball::work_ball()
{
    d = r * 2;
    area = 4 * 3.14 * pow(r, 2);
    volume = 4 / 3 * 3.14 * pow(r, 3);
}
//Вывод диаметра
float ball::get_d()
{
    return d;
}

//<---правильный тетраид--->
class tetrapyramid : public figure
{
    float b;
public:
    void set_b(float e);
    void work_tetrapyramid();
};
//Ввод стороны
void tetrapyramid::set_b(float e)
{
    b = e;
}
//Обработка данных
void tetrapyramid::work_tetrapyramid()
{
    area = (sqrtf(3) * pow(b, 2)) / 4;
    volume = (pow(b, 3) * sqrtf(2)) / 12;
}

int block_i(int min, int max);
float block_f();

int main()
{

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