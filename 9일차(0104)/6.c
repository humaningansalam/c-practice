#include<stdio.h>

void run(){
	
	unsigned char fourBitVal1 = 0x05, fourBitVal2 = 0x07;
	unsigned char eightBitVal;
	eightBitVal = fourBitVal1 << 4;
	eightBitVal = eightBitVal | fourBitVal2;
	
	printf("%x, %x ==> %x", fourBitVal1, fourBitVal2, eightBitVal);
	
	
}
int main(void){
	
	run();
	return 0;
}
