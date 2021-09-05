// 1 부터 100까지의 합을 반복문을 통해서 구하고
// 출력해주세요 !

// +=

// 10! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10

#include <stdio.h>
#pragma warning(disable : 4996)


int main()
{
    int count = 1;

    int result = 0;

    while (count < 101) result += count++;

    printf("1 부터  100까지의 합은 %d 입니다. \n", result);
    
    result = 1;
    count = 0;

    while (count < 10) result *= ++count;

    printf("10 ! = %d \n", result);
    
    int A = 1;
    int B = 1;


    while (A <= 3)
    {
        printf("조건식이 A <= 3 인 반복문이 %d 번째 반복합니다. \n\n", A);
        ++A;

        B = 1;
        while (B <= 3)
        {
            printf("조건식이 B <= 3 인 반복문이 %d 번째 반복합니다. \n", B);
            ++B;
        }
        printf("\n");
    }

    // while 문을 이용하여 구구단을 출력해주세요.

    // input__
    // 구구단 몇 단을 출력할까요 ? 5

    // output__
    // 5 X 1 = 5
    // 5 X 2 = 10
    // 5 X 3 = 15
    // 5 X 4 = 20
    // 5 X 5 = 25
    // 5 X 6 = 30
    // 5 X 7 = 35
    // 5 X 8 = 40
    // 5 X 9 = 45

    int inputNumber;

    printf("몇 단을 출력할까요 ?  : ");
    scanf("%d", &inputNumber);

    count = 0;

    while(count < 9)
        printf("%d X %d = %d \n", inputNumber , ++count, inputNumber * count);




}