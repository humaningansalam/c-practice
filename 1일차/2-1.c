#include<stdio.h>              //헤더파일 



int main(void){                //시작~ main함

    int a, sum;

    printf("첫번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);
    printf("%d\n", a);
    
    sum = sum + a;
    
    printf("두번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);
    printf("%d\n", a);
    
    sum = sum + a;
    printf("세번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);
    printf("%d\n", a);
    sum = sum + a;
    
    printf("네번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);
    printf("%d\n", a);
    sum = sum + a;
    
    printf("%d",sum);
    

	return 0;                  //끝 
}

