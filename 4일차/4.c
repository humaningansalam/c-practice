#include<stdio.h>

int main(void){
	char name[5];
	int age[5];
	int a, i=0, t,t2, n;
	int tmp;
	char e;
	
	for(;;){
		printf("1. 출입명부 입력 \n");
		printf("2. 출입명부 출력 \n");
		printf("3. 출입명부 수정(이름으로찾기) \n");
		printf("4. 출입명부 삭제(이름으로찾기) \n");
		printf("5. 프로그램 종료 \n");
		scanf("%d", &a);
		
		if(a == 1){
       		if(i>=5){
				printf("5명 이상은 안됩니다. \n");
			}
			else{
				printf("이름과 나이를 입력하세요 :");
			    scanf(" %c %d", &name[i], &age[i]);
			    i++;
			}
		}
		
		else if(a == 2){
			if(i>0){
				for(t=0; t<i; t++){
					printf("이름: %c 나이: %d \n",name[t],age[t]);
				} 
			}
			else{
				printf("입력된 정보가 없습니다. \n");
			}
		}
		
		else if(a == 3){
			printf("찾으실려는 이름을 입력하세요");
			scanf(" %c", &n);
			tmp = 0;
			for(t=0; t<i; t++){
				if(name[t] == n){
					printf("찾았습니다. \n"); 
					printf("이름: %c 나이: %d \n",name[t],age[t]);
					
					printf("수정할려는 이름과 나이 입력: ");
					scanf(" %c %d",&name[t],&age[t]);
					tmp++;
				}
			}
			if(tmp == 0){
				printf("못 찾았습니다. \n"); 
			} 
		}
		
		else if(a == 4){
			printf("삭제할려는 이름을 입력하세요");
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
					printf("삭제가 완료되었습니다. \n"); 
				}
			}
			if(tmp == 0){
				printf("못 찾았습니다. \n"); 
			} 
		}
		
		else if(a == 5){
			printf("프로그램을 종료합니까 Y or N");
			scanf(" %c", &e);
			
			if(e == 'Y' || e == 'y'){
				printf("프로그램을 종료합니다\n");
				break;
			}
			else if(e == 'N' || e == 'n'){
				printf("프로그램을 종료 취소 \n");
		    }
			else{
				printf("알수 없습니다. \n");
			}	
		}
		
		else{
			printf("알수 없습니다. \n") ;
		}	
	}
	
	return 0;
}
