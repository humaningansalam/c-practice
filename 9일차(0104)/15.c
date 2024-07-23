#include<stdio.h>
int a, b, c;
	
void input(){

	
	printf("1¹øÂ° Á¤¼ö¸¦ ÀÔ·Â :"); scanf("%d", &a);
	printf("2¹øÂ° Á¤¼ö¸¦ ÀÔ·Â :"); scanf("%d", &b);
	
	printf("1. µ¡¼À \n2. »¬¼À");
	scanf("%d", &c);
}

int sum(int x, int y){
	printf("%d + %d = %d \n",x ,y ,x+y);
}

int sub(int x, int y){
	printf("%d + %d = %d \n",x ,y ,x-y);
}

void run(){
    for(;;){
    	input();
    	
    	if(c == 1){
		    sum(a,b);
	    }
	    if(c == 2){
		    sub(a,b);
	    }
	}
}

int main(void){
	run();
	return 0;
}
