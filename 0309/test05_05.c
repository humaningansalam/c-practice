#include<stdio.h>
#include<string.h>
 
 
int main(void){
    char str[]="I am Kkotkkio";
	printf("소문자 입력: ");
    scanf("%s", &str);

    strupr(str);
    printf("%s\n", str);
  
    strlwr( str );
    printf( "%s\n", str );
  

  

	return 0;
}
