#include<stdio.h>

typedef struct Data{
    char add[10];
	int num;
	char name[10];
	int check;
}Data;

int main(void){
	
	struct Data d[10];
	int a, b, i, t = 0;
	
	for(;;){
		
		printf("1. �Է�");
		printf("2. ���");
		printf("3. ����");
		scanf("%d", &a);
		
		if(a == 1){
			
			if(t > 10 ){
				printf("10���� �ʰ��߽��ϴ�. \n");
			}
			else{
				printf("���л��̸� 1�� ���п����̸� 2���� �����ּ���. \n");
			    scanf("%d", &d[t].check);
			    
			    if(d[t].check == 1){
			        printf("�̸��� �����ּ���.");	
			        scanf("%s", &d[t].name);
				    printf("�ּҸ� �����ּ���");
				    scanf("%s", &d[t].add); 
				    t++;
			    }
			    else if(d[t].check == 2){
				    printf("�̸��� �����ּ���.");	
			        scanf("%s", &d[t].name);
				    printf("�ּҸ� �����ּ���");
				    scanf("%s", &d[t].add); 
				    printf("��ȭ��ȣ�� �����ּ���");
			 	    scanf("%d", &d[t].num); 
			 	    t++;
			    }
			    else{
			  	    printf("�˼� �����ϴ�. \n");
			    }
		    }
		}//if(a == 1){
		
		if(a == 2){
			for(i=0; i<t; i++){
				if(d[i].check == 1){
				    printf("���л� �̸�: %s �ּ�: %s \n", d[i].name, d[i].add );	
				}
				if(d[i].check == 2){
				    printf("���п��� �̸�: %s �ּ�: %s ����: %d \n", d[i].name, d[i].add,d[i].num );	
				}
			}
		}//if(a == 2){
		
		
		if(a == 3){
			break;
		}//if(a == 3){ 
		
	}//for(;;){
	
	
	return 0;
}
