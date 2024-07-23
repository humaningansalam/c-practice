#include<stdio.h>

void input(){
	int a;
	printf("1번째 정수를 입력"); scanf("%d", &a);
	
	check(a); 
}

void check(int a){
	
	if(a%2 == 0){
		
		printf("짝수 \n");
	}
	
	if(a%2 == 1){
		printf("홀수 \n");
	}
}

void run(){
	input();
}

int main(void){
	run();
	return 0;
}
