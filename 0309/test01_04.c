#include<stdio.h>

/*
������ ���� ����
-1. ������
-2. NULL������ �ʱ�ȭ 
-3. ������ ����

*/
int main(void){
	
	int i;
	double *pI;
	printf("%d\n", i);
	pI = &i;
	*pI = 1234;
	
	printf("%d\n", i);
	
	return 0;
}
