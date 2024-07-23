#include<stdio.h>

 
 
int main(void){
	int a=10, b=20, c=30;
	
	int *pABC[3] = {&a, &b, &c};
	
	printf(" %d", pABC[0]);
	printf(" %d", pABC[1]);
	printf(" %d", pABC[2]);
	
	return 0;
}
