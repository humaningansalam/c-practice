#include<stdio.h>
#include<string.h>
 
 
int main(void){
    char str[]="I am Kkotkkio";
	printf("�ҹ��� �Է�: ");
    scanf("%s", &str);

    strupr(str);
    printf("%s\n", str);
  
    strlwr( str );
    printf( "%s\n", str );
  

  

	return 0;
}
