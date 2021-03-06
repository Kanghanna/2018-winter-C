#include <stdio.h>
//정수 3개 입력
//한 숫자당 팩토리얼을 구하여 넣고, 출력
void sub(int*, int*);

int main() {
	int a[3], b[3] = { 1 }, i;
	printf("정수 3개 입력 : ");
	fflush(stdin);
	for(i=0; i < 3; i++)
	scanf_s("%d", a[i]);

	sub(a,b);
	for(i=0; i<2; i++)
	printf(b[i]+"! = " + b[i]);
}

void sub(int* a, int* b) {
	int i, j;
	for (i =0; i<3; i++) {
		for (j = a[2]; j > 1; j--) {
			b[i] *= j;
		}
	}
}
//auto변수
//변수를 주기억장치(RAM) 공간에 할당
//지역변수는 디폴트로 auto 기억부류를 사용
//전역 변수에는 auto변수 사용 불가

//register변수
//변수를 메모리에 할당하는 게 아니라 CPU의 register공간에 할당
//변수를 레지스터에 할당하면 변수에 좀 더 빠르게 접근
//보통 루프 제어 변수를 레지스터 변수로 선언(반복 루프는 계속해서 한 변수를 사용하기 때문에 빠르면 좋음)
//register변수는 사용이 제한적이다
//주소 구하기 연산자를 사용할 수 없다(이 변수는 주소가 없다)

//global변수
//초기화 하지 않아도 0으로 자동 초기화
//코드 순서대로 실행된다.
//global변수가 사용할 수 없는 공간에 있을 때 앞에 extern을 붙여 사용할 수 있게한다

//정적 지역(local) 변수
//static변수
//생성되고 부터 프로그램 끝날 때까지 계속 유지됨
//초기화는 생성할 때 한 번만 초기화된다
