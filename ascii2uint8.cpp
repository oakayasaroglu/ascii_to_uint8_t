#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<math.h>

int outbas[2];
uint8_t outt=0;

int main(){
	
	char bas[2];
		
	   	scanf("%c %c",&bas[1],&bas[0]);
		if( 47<((int)bas[0]) && 58>((int)bas[0]) ){
    		outbas[0] = (int)bas[0]-48;
		}
		else if( 96<((int)bas[0]) && 147>((int)bas[0]) )
		{	
			outbas[0] = (int)bas[0]-87;
		}
		
		
		if( 47<((int)bas[1]) && 58>((int)bas[1]) ){
    		outbas[1] = (int)bas[1]-48;
		}
		else if( 96<((int)bas[1]) && 147>((int)bas[1]) )
		{	
			outbas[1] = (int)bas[1]-87;
		}
		
		
		outt = outbas[0] + outbas[1]*16;
	
	printf("%02X",outt);
	
	return 0;
}
