#include<stdio.h>

int main(void){
	int ss[5][4];
	
	int a = 1, b;
	int i, t;
	
	for(i=0; i<5; i++){
		for(t=0; t<4; t++){
			ss[i][t] = a;
			a++;
		}
	}
	
	for(i=0; i<5; i++){
		for(t=0; t<4; t++){
			printf("%4d", ss[i][t]);
		}
		printf("\n");
	}
	
	return 0;
} 
