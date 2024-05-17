#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x, sum=0, y;
	
	printf("Input a number: ");
	scanf("%d", &x);
	
	for(y=1 ; y<x ; ++y) {
		
			if(x%y==0)
				sum=sum+y;
	}
	
	if(x==sum)
		printf("%d is a perfect number.", x);
		
	else
		printf("%d is not a perfect number.", x);
		
	return 0;
	
}
