#include <stdio.h>
#include <stdlib.h>

int main() {
	
	double f, c;
	
	printf("Enter F degree as integer: ");
	scanf(" %lf", &f);
	
	c=5.0/9.0*(f-32.0);
	
	printf("Equivalent C degree : %.2f", c);
	return 0;
}
