#include<stdio.h>

int main(void){
	char name[5];
	int age[5];
	int a, i=0, t,t2, n;
	int tmp;
	char e;
	
	for(;;){
		printf("1. ���Ը�� �Է� \n");
		printf("2. ���Ը�� ��� \n");
		printf("3. ���Ը�� ����(�̸�����ã��) \n");
		printf("4. ���Ը�� ����(�̸�����ã��) \n");
		printf("5. ���α׷� ���� \n");
		scanf("%d", &a);
		
		if(a == 1){
       		if(i>=5){
				printf("5�� �̻��� �ȵ˴ϴ�. \n");
			}
			else{
				printf("�̸��� ���̸� �Է��ϼ��� :");
			    scanf(" %c %d", &name[i], &age[i]);
			    i++;
			}
		}
		
		else if(a == 2){
			if(i>0){
				for(t=0; t<i; t++){
					printf("�̸�: %c ����: %d \n",name[t],age[t]);
				} 
			}
			else{
				printf("�Էµ� ������ �����ϴ�. \n");
			}
		}
		
		else if(a == 3){
			printf("ã���Ƿ��� �̸��� �Է��ϼ���");
			scanf(" %c", &n);
			tmp = 0;
			for(t=0; t<i; t++){
				if(name[t] == n){
					printf("ã�ҽ��ϴ�. \n"); 
					printf("�̸�: %c ����: %d \n",name[t],age[t]);
					
					printf("�����ҷ��� �̸��� ���� �Է�: ");
					scanf(" %c %d",&name[t],&age[t]);
					tmp++;
				}
			}
			if(tmp == 0){
				printf("�� ã�ҽ��ϴ�. \n"); 
			} 
		}
		
		else if(a == 4){
			printf("�����ҷ��� �̸��� �Է��ϼ���");
			scanf(" %c", &n);
			tmp = 0;
			for(t=0; t<i; t++){
				if(name[t] == n){
					
					for(t2=t; t2<i; t2++){
						name[t2] = name[t2+1];
						age[t2] = age[t2+1];
					}
					tmp++;
					i--;
					printf("������ �Ϸ�Ǿ����ϴ�. \n"); 
				}
			}
			if(tmp == 0){
				printf("�� ã�ҽ��ϴ�. \n"); 
			} 
		}
		
		else if(a == 5){
			printf("���α׷��� �����մϱ� Y or N");
			scanf(" %c", &e);
			
			if(e == 'Y' || e == 'y'){
				printf("���α׷��� �����մϴ�\n");
				break;
			}
			else if(e == 'N' || e == 'n'){
				printf("���α׷��� ���� ��� \n");
		    }
			else{
				printf("�˼� �����ϴ�. \n");
			}	
		}
		
		else{
			printf("�˼� �����ϴ�. \n") ;
		}	
	}
	
	return 0;
}
