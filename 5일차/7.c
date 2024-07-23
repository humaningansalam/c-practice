#include<stdio.h>

int main(void){
	int res;
	
	printf("정수를 입력하세요. \n");
	scanf("%d", &res);
	
	printf("%d 이 입력되었습니다. \n", res);
	
	if(res == 1){
		printf("1이입력되었습니다. \n");
	}
    else{
        printf("1 이외의 값이 입력되었습니다. \n"); 
	} 
	
	return 0; 
}
