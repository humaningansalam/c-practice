#include<stdio.h>

/*
포인터 주의 사항
-1. 변수명
-2. NULL값으로 초기화 
-3. 여러개 선언

*/
int main(void){
	
	int a = 10;  //주소 값 
	int *pA = NULL;
	printf("%d \n", pA);
	pA = &a;
	*pA = 20;
	
	printf("%d \n", pA);
		
	printf("%d \n", a);
	//16진수 
	printf("%p \n", a);
	//부호가없는 10진수 
	printf("%u \n", a);
	
	printf("%d \n", &a);
	
	
	return a;
}
