#include<stdio.h>
//조건 선택 연산자 , 삼항 연산자 
//숫자 3개 입력바다서 ,최대값 
int main(void){
	int a, max =-1;
	
	printf("1.숫자를 입력: ");
	scanf("%d", &a);
	max = (a>max) ?a : max;

	printf("2.숫자를 입력: ");
	scanf("%d", &a);
	max = (a>max) ?a : max;
	
	printf("3.숫자를 입력: ");
	scanf("%d", &a);
	max = (a>max) ?a : max;
	
	
	
	//if(a > max) max = a;
	
	printf("최대값: %d", max);
	 

	return 0; 
}
