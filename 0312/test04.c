#include<stdio.h>

union ex{
	
	int i;
	char c;
	
};

int main(void){
	union ex v;
	v.c = 'A';
	printf("%c \n", v.c);
	
	v.i = 10000;
	printf("%d \n", v.i);
}
