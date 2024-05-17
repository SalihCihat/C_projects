#include <stdio.h>

int main(void) {
	
	int watt;
	char ch;

	printf("Input a unit:");
	scanf("%c",&ch);
	
    if(ch=='h'){
	
    	printf("Input value of kilowatt:");
	scanf("%d",&watt);
		printf("value of kilowatt is converted to horsepower: %d kw = %f hp", watt, watt*1.34);
}
	else if(ch=='f') {
		printf("Input value of kilowatt:");
	scanf("%d",&watt);
		printf("value of kilowatt is converted to foot-pound: %d kw = %f fp", watt, watt*1000);
}
   	else if(ch=='g') {
   		printf("Input value of kilowatt:");
	scanf("%d",&watt);
		printf("value of kilowatt is converted to gigawatt: %d kw = %f gw", watt, watt*0.0001);
}
   	else if(ch=='m') 	{
	   printf("Input value of kilowatt:");
	scanf("%d",&watt);
		printf("value of kilowatt is converted to megawatt: %d kw = %f mw", watt, watt*0.001);
}
	return 0;
	
}
