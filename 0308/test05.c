#include<stdio.h>
#define SIZE1 3
#define SIZE2 5
int main(void){
	int i, j, t=1;
	
	int array[SIZE1][SIZE2] = {0};
	
	for(i=0; i<SIZE1; i++){
		for(j=0; j<SIZE2; j++){
			array[i][j] = t;
			printf("%3d", array[i][j]);
			t++;
		}
		printf("\n");
	}
	
	return 0;
}
