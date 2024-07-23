# include<stdio.h>
#define SIZE 5
int main(void){
	
	int array[5];
	int i;
	
	for(i=1; i<6; i++){
		array[i-1] = i*3;
	}
	
	for(i=0; i<5; i++){
		printf("%d", array[i]);
	}
	return 0;
}
