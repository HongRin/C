#include <stdio.h>

// �迭
// - ������ Ÿ���� ������ ��Ƴ��� ������ ����

int main()
{
     int number1 = 10;
    // int number2 = 20;
    // int number3 = 30;
    // int number4 = 40;
    // int number5 = 50;

    // �迭�� ���� ���
    // "�ڷ���" "�迭�̸�" [������ ����� ����];

    // �迭 ����
    int myArray[5];

    // �迭�� ������ �����ϴ� ���
    // �迭�̸�[index] = ��;
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;
    // - ������ ��ҵ��� �����ϱ� ���� ��ȣ�� index ��� �մϴ�.
    // - �迭�� �ε��� ��ȣ�� 0 ���� �����մϴ�.

    printf("int Byte = %d \n", sizeof(int));
    // sizeof(�˻��� ������) : �������� ũ�⸦ ��ȯ���ݴϴ�.

    // ����� ���ÿ� �ʱ�ȭ
    int myArray1[3] = { 10 , 20 , 30 };

    printf("myArray1[2] = %d \n", myArray1[2]);

    for(int i = 0; i < 5; ++i)
        printf("myArray[%d] = %d \n", i, myArray[i]);

    // �迭�� �� ��ҿ� 1 ~ 100 ������ �����͸� �Ҵ��Ͽ�
    // �迭�� �� ����� ���� ����غ�����.
    int myArray3[100];

    for (int i = 0; i < 100; ++i)
    {
        myArray3[i] = i + 1;
        printf("myArray[%d] = %d \n", i, myArray3[i]);
    }



    return 0;
}