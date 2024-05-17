#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x;
	
	printf("Input a number: ");
	scanf("%d", &x);
	
		if(x==6) 
		{
			printf("# # # # # #\n");
			printf("#         #\n");
			printf("#         #\n");
			printf("#         #\n");
			printf("#         #\n");
			printf("###########\n");
		}
		
		else if(x==2)	
		{
			printf("##\n");
			printf("##\n");
		}
	return 0;
}
