#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int i, j;
	int rotto[6];
	
	srand((unsigned)time(NULL));
	
	for(i=0; i<6; i++){
		rotto[i] = 1+rand()%45;
		for(j=0; j<i; j++){
			if(rotto[i] == rotto[j]){
				--i;		
			}
		}
	}
	
	for(i=0; i<6; i++){
		printf("%d \t", rotto[i]);
	}
	
	return 0;
}
