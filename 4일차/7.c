#include<stdio.h> 

int main(void){
    int x,y;
    int sum, dif;
    
    printf("x를 입력하세요");
    scanf("%d",&x);
    
    printf("y를 입력하세요");
    scanf("%d",&y);
    
    sum = x+y;
    dif = x-y;
    
    printf("sum = %d", sum);
     printf("dif = %d", dif);
    
    return 0;
}
