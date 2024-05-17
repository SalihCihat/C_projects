#include <stdio.h>

int main(void) {
	
	int watt;
	char ch;
	
	scanf("%c", &ch);
	
    if(ch=='h') {
    	printf("Input value of kilowatt: ");
	scanf("%d", &watt);
		printf("value of kilowatt is converted to horsepower: %d kw = %1.2f hp", watt, watt*1.34);
}
	else if(ch=='f') {
		printf("Input value of kilowatt: "); 
    	scanf("%d", &watt);
		printf("value of kilowatt is converted to foot-pound: %d kw = %d fp", watt, watt*1000);
}
   	else if(ch=='g') {
   		printf("Input value of kilowatt: ");
     	scanf("%d", &watt);
		printf("value of kilowatt is converted to gigawatt: %d kw = %f1.4 gw", watt, watt*0.0001);
}
   	else if(ch=='m') {
   		printf("Input value of kilowatt: ");
	    scanf("%d", &watt);     
		printf("value of kilowatt is converted to megawatt: %d kw = %1.3f mw", watt, watt*0.001);
}
	return 0;
	
}

