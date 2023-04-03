#include<16F887.h>
#DEVICE *=16 ADC=10 
#FUSES HS,NOWDT,NOPUT,NOLVP 
#USE DELAY(CLOCK=16M) 
#include<luutinh.h>
const char led7[] = {0x3f,0x86, 0x5b, 0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
int i;
int k;
void main()
{
	set_tris_a(0x00);
	set_tris_b(0x00);
	set_tris_d(0x00); 
	output_a(0x07); 

while(TRUE)
{	
output_a(0x08); 
	
for(k=0;k<11;k++){

    output_b(~led7[k]);
   
for(i=0;i<11;i++){

	output_d(~led7[i]);

    delay_ms(200);
    }
    
    }
}

}
