#include<stdio.h>

int main(void){
	
	int a, a2, a3, b, b2, b3 ;
	char name, name2;
	
	printf("1.이름과 국 영 수 성적입력"); scanf(" %c %d %d %d", &name, &a, &a2, &a3);
	
	printf("2.이름과 국 영 수 성적입력"); scanf(" %c %d %d %d", &name2, &b, &b2, &b3);

    printf("이름 : %c 총점 : %d \n", name, a+a2+a3);
    printf("이름 : %c 총점 : %d \n", name2, (b+b2+b3));
    return 0;
}
