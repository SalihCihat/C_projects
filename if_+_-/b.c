#include <stdio.h>

int main(void) {
	//b//
	int a, b;
	char ch;
	
	printf("Choose operation: ");
	scanf("%c", &ch);
	
	printf("Input two integers: ");
	scanf("%d %d", &a, &b);
	
	if(a==0 || b==0)
	printf("the operation cannot be performed.");

    else 
    
	switch(ch)
	{
	    case '+': printf("Result of 1/%d + 1/%d is %d/%d", a, b, a+b, a*b);
	    break; 

	    case '-': printf("Result of 1/%d - 1/%d is %d/%d", a, b, b-a, a*b);
	    break;
    }
	return 0; 
}
