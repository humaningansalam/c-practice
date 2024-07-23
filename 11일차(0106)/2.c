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
	    printf("%d번쨰 근무자", i+1);
	    printf("이름 :"); scanf("%s", &inn[i].name);
	    if((strcmp(inn[i].name,"x")==0||strcmp(inn[i].name,"X")==0)){
	        break;	
		}
	    printf("전화번호 :"); scanf("%s", &inn[i].phone); 
	    printf("근무시간 :"); scanf("%d", &inn[i].duty_hour);
		if(maxduty<inn[i].duty_hour){
			maxduty = inn[i].duty_hour;
			b = i;
		}
	    inn[i].employee_pay = 5380 * inn[i].duty_hour;
	    maxpay += inn[i].employee_pay;
		a++;
	}
	
	printf("이름\t");
	printf("전화번호\t");
	printf("근무시간\t");
	printf("총급여\n");
	
	for(i=0; i<a; i++){
	    printf("%s\t", inn[i].name);
	    printf("%s\t\t", inn[i].phone); 
	    printf("%d\t\t", inn[i].duty_hour); 
	    printf("%d\n", inn[i].employee_pay); 
	}
	
	
	printf("총근무자 %d명\n", a);
	printf("가장많이 근무한 직원은 %d 일한 %s이며 급여는 %d입니다.\n",maxduty,inn[b].name,inn[b].employee_pay);
	printf("그리고 지불해야할 총 급여는 %d원입니다.\n",maxpay);
	return 0;
}
