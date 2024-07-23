
#include <stdio.h>  //계산기 


int main(){
	
	int a,i,b =0;
	
	printf("정수 값 입력");
	scanf("%d",&a);
	
	for(i=1;  i<=a; i++){
		if(a%i == 0){
			b += 1;
		}
	}
	if(b==2){
		printf("소수입니다.");
	}
	
	return 0;
	
} 

int dd(int a, int b){
	return a+b;
}



