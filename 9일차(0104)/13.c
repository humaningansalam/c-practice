#include<stdio.h>

void input(){
	int a;
	printf("1��° ������ �Է�"); scanf("%d", &a);
	
	check(a); 
}

void check(int a){
	
	if(a%2 == 0){
		
		printf("¦�� \n");
	}
	
	if(a%2 == 1){
		printf("Ȧ�� \n");
	}
}

void run(){
	input();
}

int main(void){
	run();
	return 0;
}
