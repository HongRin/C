#include <stdio.h>
#pragma warning(disable : 4996)

// �Լ�
// - �Ϸ��� �ڵ带 �ϳ��� �̸� �Ʒ� ���� ��

// �Լ��� ���� ���
// - ��ȯ���� �Լ��� (�Ű��������)
// { 
//    ȣ�� ���� ��� ������ �ڵ�;
// }

// ��ȯ ���� : ��ȯ�� ���� � �������� �����մϴ�.
// �Լ��� : �Լ��� ȣ���� �� ����� �̸�

int GetLuckyNumber()
{
    int LuckyNumber;

    printf("����� ��ȣ�� �Է����ּ��� : ");
    scanf("%d", &LuckyNumber);


    // return : ��ȯ���� �Ѱ��ְ� �Լ��� ������ �����մϴ�.
    return LuckyNumber;
}

// void : ��ȯ���� ���� �Լ��� �ǹ��մϴ�.
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
    // printf("����� ��ȣ�� %d �Դϴ�. \n", Lucky);
    
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