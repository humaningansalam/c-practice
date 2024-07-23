#include<stdio.h>

int gogodan(){
	int i,j;
	for(i=1; i<10; i++){
		for(j=2; j<10; j++){
			printf("%d x %d = %d \t",j,i,j*i);
		}
		printf("\n");
	}
}
int main(void){
	
	gogodan();
	return 0;
}
