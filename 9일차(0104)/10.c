#include<stdio.h> 

int main(void){
	int loop = 1;
	
	do{
		
		printf("%d, \n", loop++);
	}while(loop <= 10);
	
	return 0;
}
