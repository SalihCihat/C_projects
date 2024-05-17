#include <stdio.h>

int main() {
	//a//
	int a, b;
	char ch;
	printf("Choose operation (+,-): ");
	scanf("%c", &ch);
	printf("Input two integers: ");
	scanf("%d %d", &a, &b);

	if(a==0 || b==0)
	printf("the operation cannot be performed");
	
    else if(ch=='+')
	printf("Result of 1/%d + 1/%d is %d/%d", a, b,a+b, a*b);
	
	else if(ch=='-')
	printf("Result of 1/%d - 1/%d is %d/%d", a, b, b-a, a*b);
	
	return 0;
}
