#include<stdio.h>

int input(){
	int score;
	printf("������ �Է��ϼ���."); scanf("%d", &score);
	return score;
}
int main(void){
	
	int a;
	
	a = input()/10;
	
	switch(a){
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		default:
			printf("F");
			break;
	}
	
	return 0;
}
