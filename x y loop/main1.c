#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x, y, F=1, a;
		
			while(x>=0 && y>=0) 
			{
					
			printf("Enter x and y: ");
			scanf("%d %d", &x, &y);
			
				if(x*y<0)
					printf("Goodbye!");
					
				else if((x*y)%2!=0)
				{
					F=3*x;
					printf("F = %d\n", F);
				}
					
				else
				{
					if(y<0)
						printf("We can not calculate %d!", y);
						
					else{
					
					for(a=1 ; a<=y ; a++)
					{
						F=F*a;
					}
					
						printf("F = %d\n", F);
				}
			}
		}
	
	return 0;
}
