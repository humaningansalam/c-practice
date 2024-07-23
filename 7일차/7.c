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
		
		printf("1. 입력");
		printf("2. 출력");
		printf("3. 종료");
		scanf("%d", &a);
		
		if(a == 1){
			
			if(t > 10 ){
				printf("10명을 초과했습니다. \n");
			}
			else{
				printf("대학생이면 1번 대학원생이면 2번을 눌러주세요. \n");
			    scanf("%d", &d[t].check);
			    
			    if(d[t].check == 1){
			        printf("이름을 적어주세요.");	
			        scanf("%s", &d[t].name);
				    printf("주소를 적어주세요");
				    scanf("%s", &d[t].add); 
				    t++;
			    }
			    else if(d[t].check == 2){
				    printf("이름을 적어주세요.");	
			        scanf("%s", &d[t].name);
				    printf("주소를 적어주세요");
				    scanf("%s", &d[t].add); 
				    printf("전화번호를 적어주세요");
			 	    scanf("%d", &d[t].num); 
			 	    t++;
			    }
			    else{
			  	    printf("알수 없읍니다. \n");
			    }
		    }
		}//if(a == 1){
		
		if(a == 2){
			for(i=0; i<t; i++){
				if(d[i].check == 1){
				    printf("대학생 이름: %s 주소: %s \n", d[i].name, d[i].add );	
				}
				if(d[i].check == 2){
				    printf("대학원생 이름: %s 주소: %s 전번: %d \n", d[i].name, d[i].add,d[i].num );	
				}
			}
		}//if(a == 2){
		
		
		if(a == 3){
			break;
		}//if(a == 3){ 
		
	}//for(;;){
	
	
	return 0;
}
