#include<stdio.h>              //헤더파일 



int main(void){                //시작~ main함

    char name, name2;
    

    int a, sum1, b, sum2;
    
    printf("첫번째 이름입력 ==>");
    //scanf(" %c", &name);   //%c 앞에 스페이스바 넣어줘야 
    name = getchar();
	//printf("%c \n", name); 
    

    printf("국어 성적을 입력하세요 ==> ");
    scanf("%d", &a);
    
    sum1 = sum1 + a;
    
    printf("영어 성적을 입력하세요 ==> ");
    scanf("%d", &a);
    
    sum1 = sum1 + a;
    printf("수학 성적을 입력하세요 ==> ");
    scanf("%d", &a);
    sum1 = sum1 + a;
    
    
    printf("두째 이름입력 ==>");
    //scanf(" %c", &name2);
    name2 = getchar();
    name2 = getchar();
    

    printf("국어 성적을 입력하세요 ==> ");
    scanf("%d", &b);
    sum2 = sum2 + b;
    
    printf("영어 성적을 입력하세요 ==> ");
    scanf("%d", &b);
    
    sum2 = sum2 + b;
    printf("수학 성적을 입력하세요 ==> ");
    scanf("%d", &b);
    sum2 = sum2 + b;
    
    
    printf("%c의 성적 전체합계는 %d 평균은 %f 입니다.\n", name, sum1, (float)sum1/3);
    printf("%c의 성적 전체합계는 %d 평균은 %f 입니다.\n", name2, sum2, sum2/3.0);
    

	return 0;                  //끝 
}

