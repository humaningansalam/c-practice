#include<stdio.h>

typedef struct Mm{
    char name[20];
	int age;	
}Mm;

struct Mm mm;

int input(){
	int x;
	printf("1. ���Ը�� �Է� \n");
	printf("2. ���Ը�� ��� \n");
	printf("3. ���� \n");
	scanf("%d", &x);
	
	return x; 
}

void pro(){
	printf("�̸� �Է�"); scanf("%s", &mm.name);
	printf("���� �Է�"); scanf("%d", &mm.age);
}

void output(){
	printf("�̸� : %s \n", mm.name);
	printf("���� : %d \n", mm.age);
}

void run(){
	for(;;){
		int a = input();
		
		if(a == 1){
			pro(); 
		}
		if(a == 2){
		    output();	
		}
		if(a == 3){
			break;
		}	
	}//for(;;){
}
int main(void){
	run();
	return 0;
	
}
