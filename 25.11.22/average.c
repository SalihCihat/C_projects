#include <stdio.h>

int main() {
	
	int number, counter=0, total=0;
	
		printf("Input a number: ");
		scanf("%d", &number);
	
	while(number==-999) 
			
		if(number>0) {
		total=total+number;
		counter=counter+1;
		printf("Average of positive numbers: %d", total/counter);
	}
		else {
		total=total+number;
		counter=counter+1;
		printf("Average of negative numbers: %d", total/counter);
	}

	return 0;
}
