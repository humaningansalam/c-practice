#include<stdio.h>

int main(void){


    int a, i, t = 56;


    
    for(;;){
    	printf("������ ������ ������ : ");
    	scanf("%d", &a);
		
		if(a == t){
			break;
		}
        else if(a != t){
        	if(a > t){
        		printf("���� ���� Ů�ϴ�.");
			}
			else if(a < t){ 
				printf("���� ���� �۽��ϴ�.");
			}
			else{
				printf("�� �� ����.");
			}
	    }
		else{
			printf("�� �� ����.");
		} 
        i++;
    }
    printf("�����մϴ� �õ�Ƚ�� : %d", i+1);
    
	return 0; 
}
