
#include <stdio.h>  //���� 


int main(){
	
	int a,i,b =0;
	
	printf("���� �� �Է�");
	scanf("%d",&a);
	
	for(i=1;  i<=a; i++){
		if(a%i == 0){
			b += 1;
		}
	}
	if(b==2){
		printf("�Ҽ��Դϴ�.");
	}
	
	return 0;
	
} 

int dd(int a, int b){
	return a+b;
}



