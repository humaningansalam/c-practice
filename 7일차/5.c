#include<stdio.h>

int main(void){
	int ss[5][5];
	
	int a = 1, b;
	int i, t, sum =0;
	
	for(i=0; i<5; i++){
		for(t=0; t<5; t++){
			ss[i][t] = a;
			a++;
		}
	}
	
	for(i=0; i<5; i++){
		for(t=0; t<i; t++){
			sum = sum + ss[i][t];
		}
	}
	
	for(i=0; i<5; i++){
		for(t=0; t<5; t++){
			printf("%4d", ss[i][t]);
		}
		printf("\n");
	}
	
	printf("음영의 합계는 %4d", sum);
	return 0;
} 
