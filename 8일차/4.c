//���⿡ �ڵ带 �ۼ��ϼ��� 
#include<stdio.h>

int menu;
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

void Vi(void){
	printf("1. ����Ʈ ���� ���� \n"); 
	printf("2. ��ǻ�� ���� ���� \n"); 
	scanf("%d", &t);

	for(i=0; i<5; i++){
		if(t == 1 && inn[i].check == 1){
			printf("����: %s ����: %s ����: %d \n",inn[i].bookname,inn[i].name,inn[i].cost);
		}
		if(t == 2 && inn[i].check == 2){
			printf("����: %s ����: %s ����: %d \n",inn[i].bookname,inn[i].name,inn[i].cost);
		}
	}
	
}

void run(void){
	for(;;){
    	Menu();
    	scanf("%d", &menu);
		 
    	if(menu == 1){ 
		Vi();
		}
		if(menu == 2){ break;   		
		}
	}//for(;;){
}

int main(void){
	run();
	
	return 0;
}
