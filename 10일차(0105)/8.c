#include<stdio.h>

void pp(int *pA, int *pB){
	int tmp;
	tmp = *pA ;
	*pA = *pB;
	*pB = tmp;
}

int main(Void){
	int a,b;
	
	printf("a�� �Է�:"); scanf("%d", &a);
	printf("b�� �Է�:"); scanf("%d", &b);
	
	pp(&a, &b);

    printf("�ٲﰪ�� a:%d b:%d\n", a, b);
	return 0;
}
