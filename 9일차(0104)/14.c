#include<stdio.h>

void run(){
    int a =0, b, sum = 0, sum2 = 0, sum3 = 0;
	
	while(a <= 50){
		sum = sum + a;
		if(a%2 == 0) sum2 = sum2 + a;
		if(a%2 == 1) sum3 = sum3 + a;
		a++;
	} 
	
	printf("1���� 50������ �հ� : %d \n", sum);
	printf("1���� 50������ ¦���հ� : %d \n", sum2);
	printf("1���� 50������ Ȧ���հ� : %d \n", sum3);
}

int main(void){
	run();
	return 0;
}
