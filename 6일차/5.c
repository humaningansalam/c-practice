#include<stdio.h>
#define SIZE 10
int main(void){
	
	int prices[SIZE] = {12,3,19,6,18,8,12,4,2,19};
	int i,j, minimum = 100;
	
	printf("[");
	for(i=0; i<SIZE; i++){
		printf("%5d", prices[i]);
	}
	printf("]\n");
	
	for(i=0; i<SIZE; i++){
		if(minimum>prices[i]){
			minimum = prices[i];	
		}
	}
	printf("최소값은 %d입니다.", minimum);	
	return 0;
}
