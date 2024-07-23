#include<stdio.h>
#define SIZE1 5
#define SIZE2 5


int main(void){
	int i, j, t=1;
	
	int array[SIZE1][SIZE2] = {0};
	
	for(i=0; i<SIZE1; i++){
		t =(i+1);
		for(j=0; j<(SIZE2-i); j++){
			array[i][j] = (t);
			t++;
		}

	}
	
	printf("\n");
	
	for(i=0; i<SIZE1; i++){
		for(j=0; j<SIZE2; j++){

			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
