#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int age;
	
	printf("Please enter your age: ");
	scanf("%d", &age);
	
	if(age>=18)
	{
	  printf("Congratulations! You can vote!");
    }
    
	else 
	{
	  printf("Sorry! You are not eligible for voting.");
    }
    
	return 0;
}
