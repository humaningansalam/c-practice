#include<stdio.h>

int main(void){


    int a, b, t;
    int sum;
    int val1, val2;
    
    printf("�����ѵ� :");
    scanf("%d", &a);
    
    printf("���ǰ� : ");
    scanf("%d", &b); 
    
    sum = a - b;
    printf("�Ž����� :%d \n",sum);
    
    val1 = sum /100;
    t = sum % 100;
	val2 = t/10;
	

    printf("100���� �������� :%d \n",val1);
    printf("10�� �� �������� :%d \n",val2);
    
    
    
	return 0; 
}
