//구조체 크기 계 산 
#include <stdio.h>
#include <stdlib.h>



int main(void){
	
	int *score = NULL;
	int i;
	
	score = (int *)malloc(100*sizeof(int));
	
	if(score == NULL){
		exit(1);
	}
	
	for(i=0; i<100; i++){
		score[i] = i;
	}
	
	for(i=0; i<100; i++){
		printf("%3d", score[i]);
	}
	
	free(score);
	 
	
	return 0;
}
