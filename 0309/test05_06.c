#include<stdio.h>
#include<string.h>
 
 
int main(void){
    int c;
    
    while(c != EOF){
    	c =getchar();
    	
    	if(islower(c)){
    		c = toupper(c);
		}
		
		putchar(c);
	}
  

  

	return 0;
}
