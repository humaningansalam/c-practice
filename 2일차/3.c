#include<stdio.h>

int main(void){
	
	int a;
	
	printf("온도를 입력하시오 : ");
	scanf("%d", &a);
	
	
	if(a>=0){
		printf("영상의 날씨입니다. \n"); 	
	}
	if(a<0) {
		printf("영하의 날씨입니다. \n");
	}
	
	printf("현재 온도는 %d 입니다.", a);
    return 0;
}
