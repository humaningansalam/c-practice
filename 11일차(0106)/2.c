#include<stdio.h>
typedef struct Info{
	char name[50];
    char phone[50];
    int duty_hour;
    int employee_pay;
}Info;

struct Info inn[10];

int main(void){
	int a = 0,b,c;
	int i, t;
	int maxduty = -1;
	int maxpay = 0;
	
	for(i=0; i<10; i++){
	    printf("%d���� �ٹ���", i+1);
	    printf("�̸� :"); scanf("%s", &inn[i].name);
	    if((strcmp(inn[i].name,"x")==0||strcmp(inn[i].name,"X")==0)){
	        break;	
		}
	    printf("��ȭ��ȣ :"); scanf("%s", &inn[i].phone); 
	    printf("�ٹ��ð� :"); scanf("%d", &inn[i].duty_hour);
		if(maxduty<inn[i].duty_hour){
			maxduty = inn[i].duty_hour;
			b = i;
		}
	    inn[i].employee_pay = 5380 * inn[i].duty_hour;
	    maxpay += inn[i].employee_pay;
		a++;
	}
	
	printf("�̸�\t");
	printf("��ȭ��ȣ\t");
	printf("�ٹ��ð�\t");
	printf("�ѱ޿�\n");
	
	for(i=0; i<a; i++){
	    printf("%s\t", inn[i].name);
	    printf("%s\t\t", inn[i].phone); 
	    printf("%d\t\t", inn[i].duty_hour); 
	    printf("%d\n", inn[i].employee_pay); 
	}
	
	
	printf("�ѱٹ��� %d��\n", a);
	printf("���帹�� �ٹ��� ������ %d ���� %s�̸� �޿��� %d�Դϴ�.\n",maxduty,inn[b].name,inn[b].employee_pay);
	printf("�׸��� �����ؾ��� �� �޿��� %d���Դϴ�.\n",maxpay);
	return 0;
}
