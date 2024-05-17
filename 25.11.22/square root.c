#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int number=2,counter=0;
	
	while(counter<5) {
		
			printf("Square root of number %d: %f\n", number, sqrt(number));
			counter=counter+1;
			number=number+2;
			
	}
	
	return 0;
}
