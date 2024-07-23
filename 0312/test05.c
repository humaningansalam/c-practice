#include<stdio.h>
#define SIZE 3
#define MAX(x,y) ((x) > (y)) ? (x) : (y)

int main(void){
	
	printf("%d \n", SIZE);
	
	printf("%d \n", MAX(3,7));
	
	return 0;
}
