#include <stdio.h>
#include <math.h>

int main() {
	
    char ch;
    float radius, side;

    printf("Input s for sphere or c for cube: ");
    ch = getchar();

    if(ch=='s' || ch=='S')

    {
      printf("Input radius of a sphere: ");
      scanf("%f", &radius);

      printf("Result: %f", 4/3*3.14*pow(radius,3));
    }
    
    else if(ch=='c' || ch=='C')
 
    {
      printf("Input side of a cube: ");	
      scanf("%f", &side);
      
      printf("Result: %f", pow(side,3));
      
	}
	  
    return 0;

}
