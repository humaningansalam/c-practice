#include<stdio.h>

void swap(int *x, int *y){
	int tmp;
	
	tmp = *x;
	*x = *y;
	*y = tmp;
} 
 
int main(void){
	int a= 100, b=200;
	
	printf("%d   %d \n" , a, b);
	
	swap(&a, &b);
	
	printf("%d   %d \n" , a, b);
	
	return 0;
}
