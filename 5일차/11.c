#include<stdio.h>

int main(void){


    int a, i, t = 1;
    int max;
    printf("���� �Է� : ");
    scanf("%d", &a);

    
    for(i=1; i<(a+1); i++){
    	if(i%7 == 0){
    	    max = i;
		} 
	}

    printf("�ִ밪 : %d", max);
    
	return 0; 
}
