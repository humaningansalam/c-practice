#include<stdio.h>

typedef struct Mm{
    char name[20];
	int age;	
}Mm;

struct Mm mm;

int input(){
	int x;
	printf("1. 출입명부 입력 \n");
	printf("2. 출입명부 출력 \n");
	printf("3. 종료 \n");
	scanf("%d", &x);
	
	return x; 
}

void pro(){
	printf("이름 입력"); scanf("%s", &mm.name);
	printf("나이 입력"); scanf("%d", &mm.age);
}

void output(){
	printf("이름 : %s \n", mm.name);
	printf("나이 : %d \n", mm.age);
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
