// 1 ���� 100������ ���� �ݺ����� ���ؼ� ���ϰ�
// ������ּ��� !

// +=

// 10! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10

#include <stdio.h>
#pragma warning(disable : 4996)


int main()
{
    int count = 1;

    int result = 0;

    while (count < 101) result += count++;

    printf("1 ����  100������ ���� %d �Դϴ�. \n", result);
    
    result = 1;
    count = 0;

    while (count < 10) result *= ++count;

    printf("10 ! = %d \n", result);
    
    int A = 1;
    int B = 1;


    while (A <= 3)
    {
        printf("���ǽ��� A <= 3 �� �ݺ����� %d ��° �ݺ��մϴ�. \n\n", A);
        ++A;

        B = 1;
        while (B <= 3)
        {
            printf("���ǽ��� B <= 3 �� �ݺ����� %d ��° �ݺ��մϴ�. \n", B);
            ++B;
        }
        printf("\n");
    }

    // while ���� �̿��Ͽ� �������� ������ּ���.

    // input__
    // ������ �� ���� ����ұ�� ? 5

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

    printf("�� ���� ����ұ�� ?  : ");
    scanf("%d", &inputNumber);

    count = 0;

    while(count < 9)
        printf("%d X %d = %d \n", inputNumber , ++count, inputNumber * count);




}