#include<stdio.h>


int seat[10] = {0};

int input(){
	int x;
	printf("�¼� ���� >> (���� -1)"); scanf("%d", &x);
	
	return x; 
}

void abs(int check){
	
	if(seat[check - 1] == 0){
		seat[check-1] = 1;
		printf("����Ǿ����ϴ�. \n");
	}
	else{
		printf("�̹� ����Ǿ����ϴ�. \n");
	} 
		
}

void menu(){
	int i;
	printf("\n-----------------------------\n");
	for(i=0; i<10; i++){
		printf("%3d", i+1);
	}
	printf("\n");
	for(i=0; i<10; i++){
		printf("%3d", seat[i]);
	}
	printf("\n-----------------------------\n");	
}

void run(){
	int check, i;
	
	for(;;){
		menu();
	    check = input();
	    if(check == -1)	break;

		abs(check);	
	}
}
int main(void){
    run();
	return 0;
	
}
