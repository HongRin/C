
// �л� ���� �� ���α׷�
/// - int �� ���� kor, eng, math �� ������ ����� �Է��� ���� ���� �Ҵ��ϰ�
/// [������ ����], [������ ���], [�ְ� ����]�� ��½�Ű�� ��ȯ�ϴ� �Լ��� �����Ͽ�
/// ������ ���� �۵��ϴ� ���α׷��� �ۼ��ϼ���!


// input__
/// ���� ���� : 90
/// ���� ���� : 80
/// ���� ���� : 95


// output__
/// ���� : 265 ��
/// ��� : 88.33��
/// �ְ� ���� : 95��

#include <stdio.h>
#pragma warning(disable : 4996)

int sum(int k, int e, int m)
{ return k + e + m; }

double ave(int k, int e, int m)
{ return (double)(k + e + m) / 3; }

int best(int k , int e, int m)
{
    int best;
    if(k > e) best = k;
    else best = e;

    if (best < m) best = m;

    return best;
}

int main()
{
    int kor, eng, math;

    printf("���� ���� : ");
    scanf("%d", &kor);
    printf("���� ���� : ");
    scanf("%d", &eng);
    printf("���� ���� : ");
    scanf("%d", &math);

    printf("���� : %d\n", sum(kor, eng, math));
    printf("��� : %.2lf\n", ave(kor, eng, math));
    printf("�ְ����� : %d\n", best(kor, eng, math));

    return 0;
}