#include <stdio.h>
#pragma warning(disable: 4996)

// for ��
// [�ʱ�� , ���ǽ�, ������ ] ���� �̷���� �ݺ���
// �ʱ�� : �ݺ��� �����ϱ� ���� ���� ���� �� �� ����Ǵ� ��
// ���ǽ� : �ݺ��� ��� ������ �������� �����ϴ� �� (������ ���̶�� �ݺ�)
// ������ : �ݺ��� ������ ���� ����Ǵ� ��

// �����
// for (�ʱ��; ���ǽ�; ������) 
//      { �ݺ� ������ �ڵ� ; }

int main()
{
    int count = 0;

    while (count < 3)                                   
    {
        printf("%d �� �ݺ��߽��ϴ� ! \n", (count + 1));
        ++count;
    }

    for (int i = 0; i < 3; ++i)
    {
        printf("%d �� �ݺ��߽��ϴ�. \n", (i + 1));
    }

    int result = 0;

    // 1 ~ 100 ������ ��
    for (int i = 1; i < 101; ++i)
        result += i;
    
    printf("1 ���� 100������ ���� %d �Դϴ� \n", result);

    result = 1;

     // 10!
    for (int i = 1; i < 10; ++i)
        result *= i;

    printf("10! = %d\n", result);

    int inputNumber;
    printf("�� �� ?  ");
    scanf("%d", &inputNumber);
    // ������ ��� !
    for (int i = 1; i < 10; ++i)
        printf("%d X %d = %d \n", inputNumber, i , i * inputNumber);

    

    return 0;
}