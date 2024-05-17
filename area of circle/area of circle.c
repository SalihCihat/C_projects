#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
	
	float area, radius;
	
	printf("Please enter the radius: ");
	scanf("%f", &radius);
	
	area = PI*radius*radius;
	
	printf("Area is: %f", area);
	
	return 0;
	
	
}
