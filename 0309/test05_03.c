#include<stdio.h>
#include<string.h>
 
 
int main(void){
	int i;
	char c[] = "abbd";     //�迭 
	c[2] = 'c';
	printf("%s", c);
	
	/*
    char *pC = "abbd";     //������  ������ �ٲ���� 
    pC[2] = 'c';
    printf("%s", pC);
    */
    
    char *pC = "abbd";     //������
    pC = "test";
    printf("%s", pC);
	return 0;
}
