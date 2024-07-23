#include<stdio.h>

void move(int *x, int *y);

int main(void){
	
	int a = 10, b = 20;
	
	printf("%d %d \n", a, b);
	move(&a, &b);
	printf("%d %d \n", a, b);
	
	return 0;
}

void move(int *x, int *y){
	
	*x = *x + 1;
	*y = *y + 1;
	
}
