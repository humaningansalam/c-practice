#include<stdio.h>

/*
포인터 주의 사항
-1. 변수명
-2. NULL값으로 초기화 
-3. 여러개 선언

*/
int main(void){
	
	int i;
	double *pI;
	printf("%d\n", i);
	pI = &i;
	*pI = 1234;
	
	printf("%d\n", i);
	
	return 0;
}
