#include <stdio.h>

int main(void)
{
    int a, b, t, y;
    
    printf("���� ������ �ִ� �� : ");
    
	scanf("%d", &a);
	
	printf("ĵ���� ���� :");
	scanf("%d", &b);
	
	t = a / b;
	y = a-(t*b);
	printf("����ִ� ĵ�� ����: %d", t);
	printf("������ ���� �� : %d", y); 

	return 0;
}
