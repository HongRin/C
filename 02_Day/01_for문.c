#include <stdio.h>
#pragma warning(disable: 4996)

// for 문
// [초기식 , 조건식, 증감식 ] 으로 이루어진 반복문
// 초기식 : 반복을 실행하기 전에 가장 먼저 한 번 실행되는 식
// 조건식 : 반복을 계속 수행할 것인지를 결정하는 식 (조건이 참이라면 반복)
// 증감식 : 반복이 끝날때 마다 실행되는 식

// 사용방법
// for (초기식; 조건식; 증감식) 
//      { 반복 수행할 코드 ; }

int main()
{
    int count = 0;

    while (count < 3)                                   
    {
        printf("%d 번 반복했습니다 ! \n", (count + 1));
        ++count;
    }

    for (int i = 0; i < 3; ++i)
    {
        printf("%d 번 반복했습니다. \n", (i + 1));
    }

    int result = 0;

    // 1 ~ 100 까지의 합
    for (int i = 1; i < 101; ++i)
        result += i;
    
    printf("1 부터 100까지의 합은 %d 입니다 \n", result);

    result = 1;

     // 10!
    for (int i = 1; i < 10; ++i)
        result *= i;

    printf("10! = %d\n", result);

    int inputNumber;
    printf("몇 단 ?  ");
    scanf("%d", &inputNumber);
    // 구구단 출력 !
    for (int i = 1; i < 10; ++i)
        printf("%d X %d = %d \n", inputNumber, i , i * inputNumber);

    

    return 0;
}