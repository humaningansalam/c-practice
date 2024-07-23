#include <stdio.h>

int main(void)
{

    int a, b; 
	
	printf("저금액 입력 :");
	scanf("%d", &a);
	
	b = 12 * 30 * a;
	
	printf("30년후의 재산은 %d만원입니다. \n",  b);
	 

	return 0;
}
