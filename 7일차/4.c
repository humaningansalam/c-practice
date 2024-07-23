#include<stdio.h>

int main(void){
	int ss[5][5];
	
	int a = 1, b;
	int i, t;
	
	for(i=0; i<5; i++){
		a = i+1;
		for(t=0; t<5; t++){
			if(a>5){
				ss[i][t] = 0;
			}
			else{
				ss[i][t] = a;
			}
			a++;
		}
	}
	
	for(i=0; i<5; i++){
		for(t=0; t<5; t++){
			printf("%4d", ss[i][t]);
		}
		printf("\n");
	}
	
	return 0;
} 
