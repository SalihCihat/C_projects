#include <stdio.h>
#include <stdlib.h>

int f1(int y, int x, int i)
{
	for(i=1 ; i<=y ; i++)
	{
		x=x*i;
	}
		y=x;
	
}



int main(void) {
	
	char ch;
	int y;
	
	while(ch=='n' || ch=='N')
	{
		printf("Input n or N: ");
		scanf("%c", &ch);
	}
	printf("Input a number: ");
	scanf("%d", &y);
	
	if(y>=0 && y<=5)
	{
		f1();
	}
	
	else if(y>5)
	{
		f2();
	}
	else if(y<0)
	{
		f3();
	}
	return 0;
}
