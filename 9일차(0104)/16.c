#include<stdio.h>
typedef struct Poom{
	char name[20];
	int ca;
	int aa;
}Poom;

struct Poom po[10];

void input(){
	int a, i;
	printf("�׸��� ������ �Է��ϼ���."); scanf("%d", &a);

	
	for(i=0; i<a; i++){
		printf("ǰ�� :"); scanf(" %s", &po[i].name);
		printf("�ܰ� :"); scanf("%d", &po[i].ca);
		printf("���� :"); scanf("%d", &po[i].aa);
		printf("\n\n");
	}
	output(a);
}

void output(int a){
    int sum = 0, total = 0, i;
	printf("=================================\n"); 
	printf("ǰ��\t�ܰ�\t����\t\n"); 
    printf("=================================\n"); 
	
	for(i=0; i<a; i++){
		printf("%s\t", po[i].name);
		printf("%d\t", po[i].ca);
		printf("%d\n", po[i].aa);
		sum = sum + po[i].ca;
		total = total + (sum * po[i].aa);
	}
    printf("=================================\n");
    
	printf("�հ� : %d\n", sum);
	printf("�Ѿ� : %d\n", total);
}

void run(){
	input();
}

int main(void){
	
	run();
	return 0;
}
