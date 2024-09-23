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

}