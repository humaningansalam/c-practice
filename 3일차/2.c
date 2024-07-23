//여기에 코드를 작성하세요. 
#include<stdio.h>
 
int main(void){

    int a,b,i=0, sum=0;
    
    printf("첫 번째 수 입력 : "); scanf("%d", &a);
    printf("두 번째 수 입력 : "); scanf("%d", &b);
	
	for(i=a; i<=b; i++){
		if(i %2 == 0){
			sum = sum + i;
		}
	}
	
	printf("%d", sum);
	return 0; 
}
