#include <stdio.h>
#pragma warning(disable : 4996)

// 함수
// - 일련의 코드를 하나의 이름 아래 묶은 것

// 함수의 정의 방법
// - 반환형식 함수명 (매개변수목록)
// { 
//    호출 했을 경우 실행할 코드;
// }

// 반환 형식 : 반환할 값이 어떤 형식인지 지정합니다.
// 함수명 : 함수를 호출할 때 사용할 이름

int GetLuckyNumber()
{
    int LuckyNumber;

    printf("행운의 번호를 입력해주세요 : ");
    scanf("%d", &LuckyNumber);


    // return : 반환값을 넘겨주고 함수의 실행을 종료합니다.
    return LuckyNumber;
}

// void : 반환값이 없는 함수를 의미합니다.
void PrintHello()
{ printf("Hello!\n"); }

int Test()
{
        printf("test");
        return 0;
        printf("test");
        printf("test");
        return 0;
}



int add(int num1, int num2);

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return num1 / num2;
}

int main()
{
    // int Lucky = GetLuckyNumber();
    // 
    // printf("행운의 번호는 %d 입니다. \n", Lucky);
    
    //PrintHello();

    // Test();

    int a = 5;
    int b = 3;

    int result = add(a, b);

    return 0;
}

int add(int num1, int num2)
{
    return num1 + num2;
}