#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//%s string %lf double %d int %c char
	
	//float = 4 byte bouble = 8 byte 우린 더블만 사용!
	int a;
	int b, c;
	//변수는 숫자가 맨 앞에 올 수 없다. 1_a는 안됨
	printf("하이\n입력하셈: ");
	scanf("%d", &a);
	printf("입력한 숫자는 %d입니당\n", a);
	
	// ASCII code A = 65 a = 97 0 = 48
	printf("%c의 아스키코드는 %d", 'A','A');
	
	
	//<변수 선언 방법>
	// int number 쓰레기값
	int number = 0;//초기화는 필수

	/* <연산자>
	+= 더하기,
	*=곱하기, 
	/=나눗셈이지만 int일 경우 정수부분만 출력,절대로 0으로 나누지 않도록 주의
	%=나머지*/
	printf("\n%d\n입력하시오:\n", 3 / 2); //정수값만 출력

    //형변환??
	// 자동 형변환,<<<<절대 사용하면 안됨! 
	// 수동 형변환
	scanf("%d %d", &b, &c);
	printf("%lf\n", (double)b / (double)c);//1.5
	printf("%lf\n", (double)(b / c));//1.0
	printf("%lf\n", (double)b / c);//1.5

	//a=a+1 = a+=1
	//++a = 증가시키고 a 사용
	//a++ = a 사용 후 증가
	
	//관계연산자
	//< > == <= >= != <<<< true, false 출력 0은 false(필수) true는 1 (암묵적 약속)
	// 논리연산자
	// && || ! 각각 and, or, not
	//@@@@@@@@@@@@@@@연산자 우선순위@@@@@@@@@@@@@@@@@@@ 근데 괄호쳐주면 외울 필요 없긴하다.
	
	
	//제어문1 = if, else 최소한으로 사용해야 예쁨
	int p = 10, r = 10;
	if (p > 5 && r < 15) { printf("앗싸~"); }

	//반복문 while 
	//ex) while(true - 조건문){printf("~~~"); 빈복!}
	while(p < 15) { printf("하이입니다.\n"); p++; }//10 11 12 13 14 5번 실행 후 false 이므로 중지
	//do while은 적어도 1번 실행한다. 마지막에 조건체크함
	// for(변수 초기값(문); 조건문; 증감문){~~~~~}
	for (int i = 0;i < 10;i++) { printf("for문 활용중입니다 총 0~9까지 10번 실행됩니다. %d번 실행중\n",i); }//단 i는 로컬변수로 끝나면 사라짐

	//조건문2 !!!!!!!!!!!!!!!!!!!!!!!!!
	//switch(조건문){case 1: case 2:}
	//반복문 탈출은 break(전제 종료는 아님), 건너뛰기는 continue(다음 반복차례로 건너뜀 i++로)

	//goto..? 냅다 건너뛰기? 별로다... 
	return 0;
	
}