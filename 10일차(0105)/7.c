#include<stdio.h>

void print(int data[],int size){
	data[0] = 10;
	data[1] = 20;
	data[2] = 30;
	printf("printf함수 %d \n",data[0]);
	printf("printf함수 %d \n",data[1]);
	printf("printf함수 %d \n",data[2]);
}

void print2(int *a){
	*a = 10;
	printf("print 주소값 %d\n", a);
	printf("print 실제값 %d\n", *a);
}

int main(Void){
	int score[3];
	int a = 1234;
	int *pA = &a;
	print2(&a);
	
	printf("main 주소값 %d\n", &a);
	printf("main 실제값 %d\n", a);
	printf("main 주소값 %d\n", pA);
	printf("main 실제값 %d\n", *pA);
	

	score[0] = 11;
	score[1] = 22;
	score[2] = 33;
	print(score, 3);
	printf("printf함수 %d \n",score[0]);
	printf("printf함수 %d \n",score[1]);
	printf("printf함수 %d \n",score[2]);
	
	return 0;
}
