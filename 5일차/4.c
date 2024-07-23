#include <stdio.h>

int main(void)
{
    int a, b, t, y;
    
    printf("현재 가지고 있는 돈 : ");
    
	scanf("%d", &a);
	
	printf("캔디의 가격 :");
	scanf("%d", &b);
	
	t = a / b;
	y = a-(t*b);
	printf("살수있는 캔디 갯수: %d", t);
	printf("구입후 남은 돈 : %d", y); 

	return 0;
}
