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
	
	int a, t, i;

	
	for(;;){
		
		printf("1. �̸��� ������ �Է� ");
		printf("2. �̸��� ������ ��� ");
		printf("3. �� �л����� ���� ");
		printf("4. ���α׷� ���� ");
		scanf("%d", &a); 
		
		if(a == 1){
			
				printf("�̸� �Է�");
			    scanf("%s", &st[t].name);
				printf("���� �Է�");
			    scanf("%d", &st[t].kor);
				printf("���� �Է�");
			    scanf("%d", &st[t].eng);
				printf("���� �Է�");
			    scanf("%d", &st[t].mat);	
				
				t++;			

	    }	
	
		if(a == 2){
			for(i=0; i<t; i++){
				printf("�̸�: %s ��: %d ��: %d ��: %d \n", st[i].name, st[i].kor, st[i].eng, st[i].mat);
			}

	    }
	    
		if(a == 3){
			
			for(i=0; i<t; i++){
				printf("�̸�: %s ����: %d \n", st[i].name, st[i].kor + st[i].eng + st[i].mat);
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
