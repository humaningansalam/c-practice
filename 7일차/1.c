#include<stdio.h>
#include<string.h>

int main(void){
	char name[10];
	char tmp[10];
	int age, a;
	
	for(;;){
		printf("1. 학생정보입력\n");
		printf("2. 학생정보출력\n");
		printf("3. 학생정보수정\n");
	    printf("4. 프로그램종료\n");
		scanf("%d", &a);
		
		if(a == 1){
			printf("이름을 입력하세요");
			scanf("%s", &name);
			printf("나이를 입력하세요");
			scanf("%d", &age); 
		}
		if(a == 2){
			printf("이름: %s 나이: %d \n", name, age);
		}
		if(a == 3){
			printf("수정할 이름을 입력하세요");
			scanf("%s", &tmp);
			strcpy(name, tmp);
			printf("수정할 나이를 입력하세요");
			scanf("%d", &age); 
		}
		if(a == 4){
		    printf("프로그램 종료");
			break; 
		} 
	}//for(;;){
} 
