#include<stdio.h>
int input(){
	int a;
	
	printf("나이를 입력하세요");
	scanf("%d", &a);
	
	 
	
	return a;
}

void run(){
	int a = input();

	printf("내가 지금까지 먹은 밥값은 : %d 원", a*365*3000);
	
}
int main(void){
	
	run();
	return 0;
}
