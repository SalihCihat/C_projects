#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char ch;
	int number;
	printf("what type of fruit you would like to have: ");
	scanf("%c", &ch);

	if(ch=='a') {
	    printf("how many of that item user would like to buy: ");
	        scanf("%d", &number);
	    printf("Cost of items: %dcent", 10*number);
}
	
	else if(ch=='b') {
	    printf("how many of that item user would like to buy: ");
	        scanf("%d", &number);
	    printf("Cost of items: %dcent", 12*number);
}

	else if(ch=='c') {
	    printf("how many of that item user would like to buy: ");
	        scanf("%d", &number);
	    printf("Cost of items: %dcent", 7*number);
}

	else
	printf("Invalid character choice.");
	
 	/*switch(ch) {	
	{
	    case 'a': 
	    printf("how many of that item user would like to buy: ");
	        scanf("%d", &number);
	    printf("Cost of items: %dcent", 10*number);
	    break;
    }
	    case 'b': {
	    printf("how many of that item user would like to buy: ");
	        scanf("%d", &number);
	    printf("Cost of items: %dcent", 12*number);
	    break;
    }
	    case 'c': {
	    printf("how many of that item user would like to buy: ");
	        scanf("%d", &number);
	    printf("Cost of items: %dcent", 7*number)*/
	return 0;
}
