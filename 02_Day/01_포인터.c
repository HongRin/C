#include <stdio.h>

// 포인터 변수
// - 할당되어있는 데이터의 주소값을 갖는 변수입니다.
// - 가지고 있는 주소를 갖는 공간에 간접적으로 접근 할수 있습니다.

int main()
{
    int variable = 10;

    // 포인터 변수
    // 선언 : 자료형 * 포인터변수이름
    int * p;

    // 초기화 방법
    // 포인터변수이름 = &변수이름
    p = &variable;
    // & : 주소 연산자
    // 변수의 이름 앞에 사용하며, 해당 변수의 주소값을 반환하는 연산입니다.

    printf("variable 의 주소 : %d \n", &variable);

    // p 는 variable 의 주소값을 저장하고 있기 떄문에
    // variable 의 주소값을 출력합니다.
    printf("p = %d \n", p);

    printf("*p = %d \n", *p);
    // * : 간접참조연산자, 역참조 연산자
    // 간접참조 : 포인터가 저장하고 있는 주소의 공간에 접근하는 행위를 의미합니다.
    // 포인터 변수가 저장하고 있는 주소에 저장된 값을 반환하는 연산자입니다.

    *p = 30;

    printf("varaible = %d\n", variable);
    printf("*p = %d\n", *p);



    return 0;
}