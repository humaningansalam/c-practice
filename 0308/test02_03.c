# include<stdio.h>
#define SIZE 5
int main(void){
	int i;
	
	
	int array[SIZE] = {0};
	int size = sizeof(array)/sizeof(int);
	
	printf("%d \n", size);
	for(i=0; i<5; i++){
		printf("%3d", array[i]);
	}
	return 0;
}

