#include<stdio.h>

/*
������ ���� ����
-1. ������
-2. NULL������ �ʱ�ȭ 
-3. ������ ����

*/
int main(void){
	
	int a = 10;  //�ּ� �� 
	int *pA = NULL;
	printf("%d \n", pA);
	pA = &a;
	*pA = 20;
	
	printf("%d \n", pA);
		
	printf("%d \n", a);
	//16���� 
	printf("%p \n", a);
	//��ȣ������ 10���� 
	printf("%u \n", a);
	
	printf("%d \n", &a);
	
	
	return a;
}
