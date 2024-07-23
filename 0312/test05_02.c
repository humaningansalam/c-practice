#include<stdio.h>
#define SIZE 3
#define MAX(x,y) ((x) > (y)) ? (x) : (y)
#define SQUARE(x) ((x)*(x))

int main(void){
	
	printf("%d \n", SIZE);
	
	printf("%d \n", MAX(3,7));
	printf("%d \n", SQUARE(6));
	
	return 0;
}
