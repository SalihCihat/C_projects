#include <stdio.h>
#include <math.h>

int main() {
	
	int para, bolum1, bolum2, kalan1;
	
	printf("Please emter amount of TL: ");
	scanf("%d", &para);
	
	bolum1 = para/10;
	bolum2 = (para-(bolum1*10))/5;
	kalan1 = para%5;
	
	printf("%d is equal to %d 10 TL, %d 5 TL and %d 1 TL.", para, bolum1, bolum2, kalan1);

	return 0;
	
}
