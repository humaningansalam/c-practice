#include<stdio.h>

int main(void){

    char name[20];
    int number;
    int i;
    
    printf("���� �����Է� :");
    scanf("%s %d", &name, &number);
    
    for(i=0; i<number; i++){
    	printf("%s", name);
	}

	return 0; 
}
