//여기에 코드를 작성하세요. 
#include<stdio.h>

int main(void){
	
	int a[3];
	int i;
    int max2; 
	int max =0; 
	int max3;
	
	for(i=0; i<3; i++){
	printf("정수값 입력(%d회): ", i+1);
	scanf("%d", &a[i]);
	
	if(max<a[i]) max = a[i];
    }
    printf("최대값은 %d \n", max);
    
    max3=a[0];
    max3 = (b>max3) ? b : max3;
    printf("최대값은 %d \n", max3);
    
    max2 = a[0];
    if(a[1] > max2){
    	max2 = a[1];
	}
	if(a[2] >max2){
    	max2 = a[2];
	}
	
	printf("최대값은 %d \n", max2);
    
    if(a[0]>a[1]){
    	if(a[0]>a[2]){
    		printf("최대값은 %d\n", a[0]);
		}
	}	
	if(a[1]>a[0]){
        if(a[1]>a[2]){
    		printf("최대값은 %d\n", a[1]);
		}
	}
	if(a[2]>a[1]){
    	if(a[2]>a[0]){
    		printf("최대값은 %d\n", a[2]);
		}
	}
	
	if(a[0]>a[1] && a[0]>a[2]){
		printf("최대값은 %d\n", a[0]);
	}
	else if(a[1]>a[0] && a[1]>a[2]){
		printf("최대값은 %d\n", a[1]);
	}
	else if(a[2]>a[1] && a[2]>a[0]){
		printf("최대값은 %d\n", a[2]);
	}
	else{
		printf("큰값은 알 수 없습니다\n");
	}
	
	
	return 0;
}
