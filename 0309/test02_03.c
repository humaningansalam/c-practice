#include<stdio.h>

//v = *p++ : p�� ����Ű�� ���� v�� ������ �� p�� ����
//v = (*p)++ : p�� ����Ű�� ���� v�� ������ �Ŀ� p�� ����Ű�� ���� ����
//v = *++p : p�� ������Ų �Ŀ� p�� ����Ű�� ���� v�� ����
//v = ++*p : p�� ����Ű�� ���� ������ �Ŀ� �� ���� �����Ͽ�, v�� ���� 
void print_reverse(int a[], int size){
	int *pA = NULL;
	pA = a;
	int i;
	
	for(i=size; i>0; i--){
		printf("%3d", pA[(i-1)]);
	}
	
	i=4;
	
	while(i>-1){
		
		printf("%3d", pA[(i)]);
		i--;
	}
	
}

int main(void){
	
	int a[5] = {10,20,30,40,50};   //�迭 --> ������ 
	
	print_reverse(a, 5); 
	return 0;
}
