#include <stdio.h>

int main()
{
    // 포인터 const 를 사용할 수 있습니다.

    int num1 = 10;
    int num2 = 20;

    const int* p1 = &num2;
    /// - 포인터 변수 앞에 const 가 사용된다면 포인터 변수가 가리키는 변수는
    //    변경할 수 있지만, 간접 참조를 통해 변수의 값을 변경할 수 없도록 합니다.
    p1 = &num1;
    // *p1 = 20;

    int* const p2 = &num1;
    // 포인터 변수가 갖는 값을 상수화시킵니다.
    // 포인터 변수가 가리키는 주소를 변경할 수 없습니다.
    // 간접 참조를 통한 값 변경은 가능합니다.
    // p2 = &num2;
    *p2 = 30;

    const int* const p3 = &num1;
    // p3 = &num2;
    // *p3 = 100;


    return 0;
}