#include<stdio.h>

int main(void){


    int a, b, t;
    int sum;
    int val1, val2;
    
    printf("투입한돈 :");
    scanf("%d", &a);
    
    printf("물건값 : ");
    scanf("%d", &b); 
    
    sum = a - b;
    printf("거스름돈 :%d \n",sum);
    
    val1 = sum /100;
    t = sum % 100;
	val2 = t/10;
	

    printf("100원의 동전갯수 :%d \n",val1);
    printf("10원 의 동전갯수 :%d \n",val2);
    
    
    
	return 0; 
}
