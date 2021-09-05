#include <stdio.h>

int main()
{
    int value1 = 10;
    int value2 = 20;

    int* pointer1 = &value1;
    int* pointer2 = &value2;

    *pointer1 += value2;
    // value1 += value2;
    // *pointer1 += *pointer2;
    // value1 += *pointer2;
    printf("value1 = %d \n", value1);

    *pointer2 += *pointer1;
    printf("value2 = %d \n", value2);

    // ¸ðµç °ª
    printf("value1 = %d\n", value1);
    printf("*pointer1 = %d\n\n", *pointer1);

    printf("&value1 = %d \n", &value1);
    printf("pointer1 = %d\n\n", pointer1);

    printf("value2 = %d\n", value2);
    printf("*pointer2 = %d\n\n", *pointer2);

    printf("&value2 = %d \n", &value2);
    printf("pointer2 = %d\n\n", pointer2);

    printf("&pointer1 = %d \n", &pointer1);

    return 0;
}