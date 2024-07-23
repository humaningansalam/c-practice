#include<stdio.h>

int score; 
char grade;

int input(){
	printf("성적을 입력하세요. ");
    scanf("%d", &score);
    
    return score;
}
void run(){
    input();
	
	if(score>=90){
		grade = 'A';
	} 
	else if(score>=80 && score<90){
		grade = 'B';
	}
	else{
		grade = 'F';
	}
	printf("%c", grade);
	
}
int main(void){
	
	run();
	return 0;
}
