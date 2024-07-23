#include<stdio.h>

int maxFind(int max){
	int a;
	printf("정수를 입력하시오 :");
    scanf("%d", &a);
    a = maxMax(a, max);
    return a; 
}

int maxMax(int a, int max){
	max = a > max ? a : max;
	return max;
}
void run(){
	int max = -1;

    max = maxFind(max);
    max = maxFind(max);
    max = maxFind(max);
    
    printf("최대값은 ?? %d", max);
    
    /*
    if(a > b){
        if(a > c){
        	printf("%d", a);
		}
    } 
    else if(b > a){
        if(b > c){
        	printf("%d", b);
		}
    } 
    else if(c > b){
        if(c > a){
        	printf("%d", c);
		}
    } 
    else{
    	printf("알수없음");
	}
	*/
	
}
int main(void){
	
	run();
	return 0;
}
