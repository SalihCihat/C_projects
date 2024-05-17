#include <stdio.h>

int main(){

	int x, counter=0;
	
	do{
		printf ("Enter an even number: ");
		scanf("%d", &x);
		counter++;
		
	}while(x%2!=0);
	
		printf("%d attempts made!", counter);
		
 return 0;
}
