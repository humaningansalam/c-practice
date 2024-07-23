#include <stdio.h>

typedef struct student{
	char name[20];
	int age;
}STUDENT;

STUDENT input(){
	STUDENT tmp;
	char name[20];
	int age;
	printf("이름 선택:"); scanf("%s", &tmp.name);
	printf("나이 선택:"); scanf("%d", &tmp.age);
	
	
	return tmp; 
	
}

output(STUDENT *s){
	printf("%s", (*s).name);
	printf("%d", (*s).age);
}

int main(void){
	
	STUDENT s;
	int menu;
	while(1){
		printf("메뉴 선택:"); scanf("%d", &menu);
		
		if(menu == 1){
			s = input();
		} 
		if(menu == 2){
			output(&s);
		}
		if(menu == 3){
			break;
		}
	}
	return 0;
}
