#include<stdio.h>
#define SIZE1 5
#define SIZE2 5


int main(void){
	int i, j, t=1, sum=0;
	
	int array[SIZE1][SIZE2] = {0};
	
	printf("\n");
	
	for(i=0; i<SIZE1; i++){
		for(j=0; j<SIZE2; j++){
			array[i][j] = t;
			printf("%3d", array[i][j]);
			t++;
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<SIZE1; i++){
		for(j=0; j<i; j++){
			sum = sum + array[i][j];
		}

	}
	
	printf("%d", sum);
	return 0;
}
