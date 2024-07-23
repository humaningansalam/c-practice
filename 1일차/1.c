#include<stdio.h>              //헤더파일 

/*
void show(){                   //show() 함수 
	
	printf("show() 실행");
}
*/

int main(void){                //시작~ main함

    //show(); 
    printf("main() 실행");
    
    int num;
    num = 3;
    
    printf("num = %d %d %d \n", num,num+1,num+2);
    
    printf("%d\n", num);
    printf("%d\n", num*2);
    printf("%d\n\n\n", num*3);
    
    printf("%d\n", num);
    num = num+num;
    printf("%d\n", num);
    num = num+num+num;
    printf("%d\n", num);
    
    int num2;
	 
    printf("첫번째  정수입력");
	scanf("%d", &num);
	printf("%d가 입력되었습니다\n", num);
	
    printf("두번째  정수입력");
	scanf("%d", &num2);
	printf("%d가 입력되었습니다\n", num2);
	
	printf("%d + %d = %d 입니다. \n", num, num2, num+num2);
	
	int a, b;
	
	printf("첫번째 숫자 입력");
	scanf("%d", &a);
	
	printf("두번째 숫자 입력");
	scanf("%d", &b);
	
	printf("%d + %d = %d 입니다. \n", a, b, a+b);
	printf("%d - %d = %d 입니다. \n", a, b, a-b); 
    printf("%d && %d = %d 입니다. \n", a, b, a%b); 	
	
	float f = 12.34;
	double d = 3.14;
	
	printf("%f %lf \n", f, d);

	printf("실수두개 입력 : ");
	scanf("%f %lf", &f, &d);
	printf("%f %lf", f, d);

	return 0;                  //끝 
}

