#include<stdio.h>

int maxFind(int max){
	int a;
	printf("������ �Է��Ͻÿ� :");
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
    
    printf("�ִ밪�� ?? %d", max);
    
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
    	printf("�˼�����");
	}
	*/
	
}
int main(void){
	
	run();
	return 0;
}
