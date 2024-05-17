#include <stdio.h>

int main()
{
    char chr;
   int countera=0,countere=0,counteri=0,countero=0,counteru=0;
   for(int i = 0;i<20;i++){
       scanf("%c",&chr);
        switch(chr){
        case 'A':
        countera++;
        break;
        case 'E':
        countere++;
        break;
        case'I':
        counteri++;
        break;
        case'O':
        countero++;
        break;
        case'U':
        counteru++;
        break;
   }
   }
   printf("'A'repeated %d time'E'repeated %d time'İ'repeated %d time'O'repeated %d time'U'repeated %d time",countera,countere,counteri,counteru,countero);
   return 0;

    return 0;
}
