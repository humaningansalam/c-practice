//여기에 코드를 작성하세요 
#include<stdio.h>

int menu = 0;
int t, i; 

typedef struct Info{
	char bookname[20];
	char name[20];
	int cost;
}Info;

typedef struct Book{
	int check;
	Info in;
}Book;

Book bk[5] = {
	{1, {"ICDL", "이한나", 1100}}, 
	{1, {"컴활", "이한나", 1500}}, 
	{2, {"C언어", "이경우", 3000}}, 
	{2, {"자바", "이성빈", 2700}}, 
	{2, {"파이썬", "이영민", 2000}}
};

void Menu(void){
	
	if(menu == 0){ 
		printf("1.==도서목록== \n");
        printf("2.====종료==== \n");
    }
    else if(menu == 1){
    	printf("1. 베스트 셀러 선택 \n"); 
	    printf("2. 컴퓨터 전공 선택 \n"); 
    }
}

void Cho(void){
	
    if(menu == 0){ 
		scanf("%d", &menu);
    }
    else if(menu == 1){
	    scanf("%d", &t);
	    if(t == 1){
	    	Vi();
		}
		else if(t == 2){
	    	Vi();
		}
		else{
			printf("알수없음 \n"); 
		}
	}
	else{
		printf("알수없음 \n"); 
	}
}

void Vi(void){

	for(i=0; i<5; i++){
		if(t == 1 && bk[i].check == 1){
			printf("제목: %s 저자: %s 가격: %d \n",bk[i].in.bookname,bk[i].in.name,bk[i].in.cost);
		}
		if(t == 2 && bk[i].check == 2){
			printf("제목: %s 저자: %s 가격: %d \n",bk[i].in.bookname,bk[i].in.name,bk[i].in.cost);
		}
	}	
	menu = 0;
}

void run(void){
	for(;;){
		if(menu == 0){ 
		    Menu();
		    Cho();
		}
    	else if(menu == 1){
		    Menu(); 
    	    Cho();
		}
		else if(menu == 2){ 
		    break;   		
		}
		else{
			printf("알수없음 \n"); 
		}
	}//for(;;){
}

int main(void){
	run();
	return 0;
}
