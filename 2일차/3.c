#include<stdio.h>

int main(void){
	
	int a;
	
	printf("�µ��� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	
	if(a>=0){
		printf("������ �����Դϴ�. \n"); 	
	}
	if(a<0) {
		printf("������ �����Դϴ�. \n");
	}
	
	printf("���� �µ��� %d �Դϴ�.", a);
    return 0;
}
