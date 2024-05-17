#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x;
	
	do{
		printf("Enter a positive integer: ");
		scanf("%d", &x);
		
	}while(x>=0);
	
	return 0;
}
