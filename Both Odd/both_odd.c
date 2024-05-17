#include <stdio.h>

int main() {

   int n1, n2;

   printf("Please enter two integers: ");
   scanf("%d %d", &n1, &n2);

   if(n1%2==1 && n2%2==1)

      printf("Hey, both of these are odd.");

   else

      printf("Some even numbers here.");

	return 0;
}
