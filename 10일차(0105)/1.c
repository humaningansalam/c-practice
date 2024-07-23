#include<stdio.h>

int main(void){
	
	int i,j;
	
	for(i=0; i<100; i++){
		if(i%3 == 0 && i%4 == 0){
			printf("%d\n", i);
		}
	}
	
	while(i<100){
		if(i%3 == 0 && i%4 == 0){
			printf("%d\n", i);
		}
		i++;
	}
	
	return 0;
}
