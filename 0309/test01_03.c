#include<stdio.h>

/*
포인터 주의 사항
-1. 변수명
-2. NULL값으로 초기화 
-3. 여러개 선언

*/
int main(void){
	
	int *pA = NULL;
	
	if(pA != NULL){
		printf("ok!!");
	}
	else{
		printf("no!!");
	}
	return 0;
}
