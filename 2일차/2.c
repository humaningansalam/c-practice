#include<stdio.h>

int main(void){
	
	int a, a2, a3, b, b2, b3 ;
	char name, name2;
	
	printf("1.�̸��� �� �� �� �����Է�"); scanf(" %c %d %d %d", &name, &a, &a2, &a3);
	
	printf("2.�̸��� �� �� �� �����Է�"); scanf(" %c %d %d %d", &name2, &b, &b2, &b3);

    printf("�̸� : %c ���� : %d \n", name, a+a2+a3);
    printf("�̸� : %c ���� : %d \n", name2, (b+b2+b3));
    return 0;
}
