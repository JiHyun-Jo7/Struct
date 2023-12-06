#include <stdio.h>

struct human {
    int age;
    int height;
    int weight;
};

int main()
{
    struct human info;

    info.age = 20;
    info.height = 180;
    info.weight = 75;

    printf("information\n");
    printf("age     : %d\n", info.age);
    printf("height  : %d\n", info.height);
    printf("weight  : %d\n", info.weight);

    return 0;
}