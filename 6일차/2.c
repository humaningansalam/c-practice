#include<stdio.h>

int main(void){
	
	int test[10];
	
	test[0] = 10;
	test[1] = 20;
	
	printf("%d \n", test);
	printf("%d \n", &test);
	printf("%d \n", &test[0]);
	printf("%d \n", &test[1]);
	printf("%d \n", &test[2]);
	return 0;
}
