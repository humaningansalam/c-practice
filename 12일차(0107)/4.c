#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int iidd = 1234;
int ppww = 4567;
int count = 0;

int main(void){
	int i, j;
    int id, pw;
	
	for(;;){
		if(count > 2){
			printf("�α��� 3�� �̻� ����!! \n");
			break;
		}
	
	
		printf("���̵�"); scanf("%d", &id);
		printf("��й�ȣ"); scanf("%d", &pw);
		
		if(id == iidd && pw == ppww){
			printf("�α��� ���� \n");
			break;
		}
	    
		if(!(id == iidd && pw == ppww)){
			count++;
	    	printf("�����ϼ˽��ϴ� ����Ƚ�� %d \n",3-count);
		} 

	}
	
	
	return 0;
}
