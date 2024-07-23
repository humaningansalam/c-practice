#include<stdio.h>              //헤더파일 



int main(void){                //시작~ main함

    char name[10];
    
    printf("이름 입력 :");
    scanf("%s", &name);
	printf("입력된 이름은 %s \n", name); 
    

	return 0;                  //끝 
}

