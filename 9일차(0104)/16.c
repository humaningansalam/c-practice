#include<stdio.h>
typedef struct Poom{
	char name[20];
	int ca;
	int aa;
}Poom;

struct Poom po[10];

void input(){
	int a, i;
	printf("항목의 개수를 입력하세요."); scanf("%d", &a);

	
	for(i=0; i<a; i++){
		printf("품명 :"); scanf(" %s", &po[i].name);
		printf("단가 :"); scanf("%d", &po[i].ca);
		printf("수량 :"); scanf("%d", &po[i].aa);
		printf("\n\n");
	}
	output(a);
}

void output(int a){
    int sum = 0, total = 0, i;
	printf("=================================\n"); 
	printf("품명\t단가\t수량\t\n"); 
    printf("=================================\n"); 
	
	for(i=0; i<a; i++){
		printf("%s\t", po[i].name);
		printf("%d\t", po[i].ca);
		printf("%d\n", po[i].aa);
		sum = sum + po[i].ca;
		total = total + (sum * po[i].aa);
	}
    printf("=================================\n");
    
	printf("합계 : %d\n", sum);
	printf("총액 : %d\n", total);
}

void run(){
	input();
}

int main(void){
	
	run();
	return 0;
}
