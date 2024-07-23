#include <stdio.h>

int main(void)
{

    float a, b; 
	
	printf("원의 반지름 입력 :");
    scanf("%f", &a);
    
    b = a * a * 3.14;
	
	printf("원의 면적 : %lf", b);	 

	return 0;
}
