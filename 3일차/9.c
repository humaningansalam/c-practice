//���⿡ �ڵ带 �ۼ��ϼ���. 
#include<stdio.h>

int main(void){
	int a, t;
	int kor[5], mat[5], eng[5]; 
	
	char c[5];
	
	for(;;){
		
		printf("1. �̸��� ������ �Է� ");
		printf("2. �̸��� ������ ��� ");
		printf("3. �� �л����� ���� ");
		printf("4. ���α׷� ���� ");
		scanf("%d", &a); 
		
		if(a == 1){
			
			for(t=0; t<5; t++){
				printf("%d��°  �̸��� �� �� �� �����Է�", t+1);
			    scanf(" %c %d %d %d", &c[t], &kor[t], &eng[t], &mat[t]);	
			}			

	    }	
	
		if(a == 2){
			for(t=0; t<5; t++){
				printf("�̸�: %c ��: %d ��: %d ��: %d \n", c[t], kor[t], eng[t], mat[t]);
			}

	    }
	    
		if(a == 3){
			
			for(t=0; t<5; t++){
				printf("�̸�: %d ����: %d \n", c[t], kor[t] + eng[t] + mat[t]);
			}

	    }		
		if(a == 4){
            printf("���� \n");
			break; 
	    }
	}
    printf("���α׷��� ���� �����Ͽ����ϴ�. \n");
	return 0;
}
