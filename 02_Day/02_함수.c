
// 학생 성적 평가 프로그램
/// - int 형 변수 kor, eng, math 에 점수를 사용자 입력을 통해 값을 할당하고
/// [과목의 총점], [과목의 평균], [최고 점수]를 출력시키는 반환하는 함수를 정의하여
/// 다음과 같이 작동하는 프로그램을 작성하세요!


// input__
/// 국어 점수 : 90
/// 영어 점수 : 80
/// 수학 점수 : 95


// output__
/// 총점 : 265 점
/// 평균 : 88.33점
/// 최고 점수 : 95점

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

    printf("국어 점수 : ");
    scanf("%d", &kor);
    printf("국어 점수 : ");
    scanf("%d", &eng);
    printf("국어 점수 : ");
    scanf("%d", &math);

    printf("총점 : %d\n", sum(kor, eng, math));
    printf("평균 : %.2lf\n", ave(kor, eng, math));
    printf("최고점수 : %d\n", best(kor, eng, math));

    return 0;
}