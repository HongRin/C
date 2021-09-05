#include <stdio.h>

// 배열
// - 동일한 타입의 변수를 모아놓은 데이터 집합

int main()
{
     int number1 = 10;
    // int number2 = 20;
    // int number3 = 30;
    // int number4 = 40;
    // int number5 = 50;

    // 배열의 선언 방법
    // "자료형" "배열이름" [저장할 요소의 갯수];

    // 배열 선언
    int myArray[5];

    // 배열의 공간에 접근하는 방법
    // 배열이름[index] = 값;
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;
    // - 각각의 요소들을 구분하기 위한 번호를 index 라고 합니다.
    // - 배열의 인덱스 번호는 0 부터 시작합니다.

    printf("int Byte = %d \n", sizeof(int));
    // sizeof(검사할 데이터) : 데이터의 크기를 반환해줍니다.

    // 선언과 동시에 초기화
    int myArray1[3] = { 10 , 20 , 30 };

    printf("myArray1[2] = %d \n", myArray1[2]);

    for(int i = 0; i < 5; ++i)
        printf("myArray[%d] = %d \n", i, myArray[i]);

    // 배열의 각 요소에 1 ~ 100 까지의 데이터를 할당하여
    // 배열의 각 요소의 값을 출력해보세요.
    int myArray3[100];

    for (int i = 0; i < 100; ++i)
    {
        myArray3[i] = i + 1;
        printf("myArray[%d] = %d \n", i, myArray3[i]);
    }



    return 0;
}