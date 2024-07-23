#include<stdio.h>

int val1=5, val2=2;

void add(int a, int b){
	printf("5+2 = %d\n", a+b);
}

void sub(int a, int b){
	printf("5-2 = %d\n", a-b);
}

int c(int a, int b){
	return a*b;
}

int d(int a, int b){
	return a/b;
}

int main(void){
	
	add(val1, val2);
	sub(val1, val2);
	
	printf("%d\n", c(val1, val2));
	printf("%d\n", d(val1, val2));
	printf("5&&2 = %d\n", val1&val2);
}
