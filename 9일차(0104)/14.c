#include<stdio.h>

void run(){
    int a =0, b, sum = 0, sum2 = 0, sum3 = 0;
	
	while(a <= 50){
		sum = sum + a;
		if(a%2 == 0) sum2 = sum2 + a;
		if(a%2 == 1) sum3 = sum3 + a;
		a++;
	} 
	
	printf("1에서 50까지의 합계 : %d \n", sum);
	printf("1에서 50까지의 짝수합계 : %d \n", sum2);
	printf("1에서 50까지의 홀수합계 : %d \n", sum3);
}

int main(void){
	run();
	return 0;
}
