#include<stdio.h>
int input(){
	int a;
	
	printf("���̸� �Է��ϼ���");
	scanf("%d", &a);
	
	 
	
	return a;
}

void run(){
	int a = input();

	printf("���� ���ݱ��� ���� �䰪�� : %d ��", a*365*3000);
	
}
int main(void){
	
	run();
	return 0;
}
