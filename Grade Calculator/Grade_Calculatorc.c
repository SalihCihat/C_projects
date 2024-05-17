#include <stdio.h>

int main () {
	
	int midterm1, midterm2, final, grade;
	
	printf("Please Enter Midterms: ");
	scanf("%d %d", &midterm1, &midterm2);
	
	printf("Please Enter Final: ");
	scanf("%d", &final);
	
	grade = midterm1*30/100+midterm2*30/100+final*40/100;
	printf("Your Total grade: %d\n", grade);
	
	
	  if(grade>=85)
	
	    printf("You get: %c", 'A');
	
	
	  else if(grade>=70)
	
	    printf("You get: %c", 'B');
	    
	
	  else if(grade>=55)
	
        printf("You get: %c", 'C');
        
        
      else if(grade>=40)
       
        printf("You get: %c", 'D');
        
        
      else
        
        printf("You get: %c", 'F');
        
        
        
        return 0;
        
}
