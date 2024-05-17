#include <stdio.h>  
#include <math.h>  
  
int main(void)  
{  
    float a, b, radius, x, y, distance;  
  
    printf("Enter the center point (a, b): ");  
    scanf("%f %f", &a, &b);  
  
    printf("Enter radius of the circle: ");  
    scanf("%f", &radius);  
  
    printf("Enter the point P(x, y): ");  
    scanf("%f %f", &x, &y);  
  
    distance = sqrt(pow((x-a),2)+pow((y-b),2));  
  
    if(distance<radius)  
    {  
        printf("Point (%0.2f, %0.2f) is inside the Circle\n", x, y);  
    }  
    else if(distance>radius)  
    {  
        printf("Point (%0.2f, %0.2f) is outside the Circle\n", x, y);  
    }  
    else  
    {  
        printf("Point (%0.2f, %0.2f) is on the Circle\n", x, y);  
    }  
  
    return 0;  
}  
