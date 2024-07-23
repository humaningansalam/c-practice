#include<stdio.h>

void input(){
	int a, b;
	printf("1번째 정수를 입력"); scanf("%d", &a);
	printf("2번째 정수를 입력"); scanf("%d", &b);
	
	check(a, b); 
}

void check(int a, int b){
	
	if(a == b){
		
		printf("두 수는 같다 \n");
	}
	
	if(a != b){
		printf("두 수는 다르다 \n");
	}
}

void run(){
	input();
}

int main(void){
	run();
	return 0;
}
