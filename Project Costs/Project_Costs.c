#include <stdio.h>

int main(void) {

    char ch;
    int x;
    printf("Scale of Project: ");
    scanf("%c", &ch);
    printf("Input number of project: ");
	scanf("%d", &x);
	
   if(ch=='S') {
   	
   	    if(x<3)
        printf("Total Cost of the Pojects: %d dolars", 1500*x);

        else if(x>=3 && x<=5)
        printf("Total Cost of the Pojects: %d dolars", 1000*x);
        	
   	    else if(x>5)
       	printf("Total Cost of the Pojects: %d dolars", 750*x);       
    }
       
    else if(ch=='M') {
    	
    	if(x<3)
       	printf("Total Cost of the Pojects: %d dolars", 2500*x);
       	
       	else if(x>=3 && x<=5)
       	printf("Total Cost of the Pojects: %d dolars", 2000*x);
        	
       	else if(x>5)
       	printf("Total Cost of the Pojects: %d dolars", 1750*x);
   }
         
        	
    else if(ch=='L') {
    	
    	if(x<3)
       	printf("Total Ccost of the Pojects: %d dolars", 4500*x);
        	
       	else if(x>=3 && x<=5)
       	printf("Total Ccost of the Pojects: %d dolars", 4000*x);
        	
       	else if(x>5)
       	printf("Total Ccost of the Pojects: %d dolars", 3500*x);
    }
        return 0;
        
}
