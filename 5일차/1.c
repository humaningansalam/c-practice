#include <stdio.h>

int main(void)
{

    int a, sum; 
	
	printf("달러화 금액 입력 :");
	scanf("%d", &a);
	
	sum = 1100 * a;
	
	printf("달러화 %d달러는 %d원입니다. \n", a, sum);
	 

	return 0;
}
