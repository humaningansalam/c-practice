#include<stdio.h>
#include<string.h>

int main(void){
	char name[10];
	char tmp[10];
	int age, a;
	
	for(;;){
		printf("1. �л������Է�\n");
		printf("2. �л��������\n");
		printf("3. �л���������\n");
	    printf("4. ���α׷�����\n");
		scanf("%d", &a);
		
		if(a == 1){
			printf("�̸��� �Է��ϼ���");
			scanf("%s", &name);
			printf("���̸� �Է��ϼ���");
			scanf("%d", &age); 
		}
		if(a == 2){
			printf("�̸�: %s ����: %d \n", name, age);
		}
		if(a == 3){
			printf("������ �̸��� �Է��ϼ���");
			scanf("%s", &tmp);
			strcpy(name, tmp);
			printf("������ ���̸� �Է��ϼ���");
			scanf("%d", &age); 
		}
		if(a == 4){
		    printf("���α׷� ����");
			break; 
		} 
	}//for(;;){
} 
