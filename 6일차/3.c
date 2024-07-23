#include<stdio.h>

int main(void){
	int ss[10] = {0};
	int a, b, i;
	
	for(;;){
	    printf("-----------------------------\n");
        printf("  1  2  3  4  5  6  7  8  9  10\n");
        printf("-----------------------------\n");
        for(i=0; i<10; i++){
        	printf("%3d", ss[i]);
		}
		
		printf("\n원하시는 좌석번호를 입력하세요(종료는 -1) :");
		scanf("%d", &a);
		
		if(a > 0 && a <11){
			if(ss[a-1] == 1){	
			    printf("이미예약되어있습니다.\n");
			}
			else{
				ss[a-1] = 1;
			}
		}
		else if(a == -1){
		    printf("종료되었습니다. \n");
			break;
		}
		else{
			printf("알수없음. \n");
		}
		
	}//for(;;){


	return 0;
}
