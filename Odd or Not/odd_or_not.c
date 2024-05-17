#include <stdio.h>

int main(void) {
	
	int n;
	
	printf("Please enter an integer: ");
	scanf("%d", &n);
    
	if(n%2==1)
	  
	  printf("Hey, this is an odd number.");
	
	else
	  
	  printf("This is an even number.");	
	
	return 0;
	
}

