#include<stdio.h>
//���� ���� ������ , ���� ������ 
//���� 3�� �Է¹ٴټ� ,�ִ밪 
int main(void){
	int a, max =-1;
	
	printf("1.���ڸ� �Է�: ");
	scanf("%d", &a);
	max = (a>max) ?a : max;

	printf("2.���ڸ� �Է�: ");
	scanf("%d", &a);
	max = (a>max) ?a : max;
	
	printf("3.���ڸ� �Է�: ");
	scanf("%d", &a);
	max = (a>max) ?a : max;
	
	
	
	//if(a > max) max = a;
	
	printf("�ִ밪: %d", max);
	 

	return 0; 
}
