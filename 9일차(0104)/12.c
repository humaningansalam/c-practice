#include<stdio.h>

void input(){
	int a, b;
	printf("1��° ������ �Է�"); scanf("%d", &a);
	printf("2��° ������ �Է�"); scanf("%d", &b);
	
	check(a, b); 
}

void check(int a, int b){
	
	if(a == b){
		
		printf("�� ���� ���� \n");
	}
	
	if(a != b){
		printf("�� ���� �ٸ��� \n");
	}
}

void run(){
	input();
}

int main(void){
	run();
	return 0;
}
