//���⿡ �ڵ带 �ۼ��ϼ��� 
#include<stdio.h>

int menu = 0;
int t, i; 

typedef struct Info{
	int check;
	char bookname[20];
	char name[20];
	int cost;
}Info;


Info inn[5] = {
	{1, "ICDL", "���ѳ�", 1100}, 
	{1, "��Ȱ", "���ѳ�", 1500}, 
	{2, "C���", "�̰��", 3000}, 
	{2, "�ڹ�", "�̼���", 2700}, 
	{2, "���̽�", "�̿���", 2000}
};

void Menu(void){
	printf("1.==�������== \n");
    printf("2.====����==== \n");
}

void Cho(void){
    if(menu == 0){ 
		scanf("%d", &menu);
    }
    else if(menu == 1){
    	printf("1. ����Ʈ ���� ���� \n"); 
	    printf("2. ��ǻ�� ���� ���� \n"); 
	    scanf("%d", &t);
	    if(t == 1){
	    	Vi();
		}
		else if(t == 2){
	    	Vi();
		}
		else{
			printf("�˼����� \n"); 
		}
	}
	else{
		printf("�˼����� \n"); 
	}
}

void Vi(void){

	for(i=0; i<5; i++){
		if(t == 1 && inn[i].check == 1){
			printf("����: %s ����: %s ����: %d \n",inn[i].bookname,inn[i].name,inn[i].cost);
		}
		if(t == 2 && inn[i].check == 2){
			printf("����: %s ����: %s ����: %d \n",inn[i].bookname,inn[i].name,inn[i].cost);
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
    	Cho();
		}
		else if(menu == 2){ 
		break;   		
		}
		else{
			printf("�˼����� \n"); 
		}
	}//for(;;){
}

int main(void){
	run();
	return 0;
}
