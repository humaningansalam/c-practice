//���⿡ �ڵ带 �ۼ��ϼ���. 
#include<stdio.h>

typedef struct Student{
	char name[10];
	int kor;
	int mat;
	int eng;	
}Student;

int main(void){
	
	Student st[5];
	
	int a, t;

	
	for(;;){
		
		printf("1. �̸��� ������ �Է� ");
		printf("2. �̸��� ������ ��� ");
		printf("3. �� �л����� ���� ");
		printf("4. ���α׷� ���� ");
		scanf("%d", &a); 
		
		if(a == 1){
			
			for(t=0; t<5; t++){
				printf("�̸� �Է�");
			    scanf("%s", &st[t].name);
				printf("���� �Է�");
			    scanf("%s", &st[t].kor);
				printf("���� �Է�");
			    scanf("%s", &st[t].eng);
				printf("���� �Է�");
			    scanf("%s", &st[t].mat);	
			}			

	    }	
	
		if(a == 2){
			for(t=0; t<5; t++){
				printf("�̸�: %s ��: %d ��: %d ��: %d \n", &st[t].name, &st[t].kor, &st[t].eng, &st[t].mat);
			}

	    }
	    
		if(a == 3){
			
			for(t=0; t<5; t++){
				printf("�̸�: %s ����: %d \n", &st[t].name, &st[t].kor, &st[t].eng, &st[t].mat);
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
