//���⿡ �ڵ带 �ۼ��ϼ���. 
#include<stdio.h>
 
int main(void){

    int a,b,i=0, sum=0;
    
    printf("ù ��° �� �Է� : "); scanf("%d", &a);
    printf("�� ��° �� �Է� : "); scanf("%d", &b);
	
	for(i=a; i<=b; i++){
		if(i %2 == 0){
			sum = sum + i;
		}
	}
	
	printf("%d", sum);
	return 0; 
}
