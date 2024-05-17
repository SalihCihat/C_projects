#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char ch;
	float a, b, c, h;
	
	printf("Input c for cuboid t for triangle prism: ");
	scanf("%c", &ch);
	
	 if(ch=='t')
	{
	
	  printf("Input angles of the base triangle: ");
	  scanf("%f %f", &a, &b);
	
	  printf("Input height of triangle prism: ");
	  scanf("%f", &h);
	
	  printf("Result: %f", a*b/2*h);
	  
    }      
	
	 else if(ch=='c')
	{
	
	  printf("Input angles of the base rectangle: ");
	  scanf("%f %f", &a, &b);
	
	  printf("Input the angle of other rectangle: ");
	  scanf("%f", &c);
    
      printf("Result: %f", a*b*c);
      
	}
	
	return 0;
}
