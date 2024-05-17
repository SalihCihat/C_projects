#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x, a;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
		for(a=1 ; a<=(x*x) ; a++) 
		{
			printf("%-3d", a);
			
				if(a%x==0)				
					printf("\n");
		}
			
	return 0;
}
