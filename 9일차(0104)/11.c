#include<stdio.h> 

int main(void){
	int num =1;
	int sum = 0;
	int i;
	/*
	while(sum <100){
		sum = sum + num;
		printf("1~ %d = %d \n", num, sum);
		num++;
	}
	*/
	
	for(i=0; i<100; i++){
		sum = sum + num;
		printf("1~ %d = %d \n", num, sum);
		num++;
		if(sum >= 200) break;
	}
	return 0;
}
