#include <stdio.h>
int main (void)
{
   int i,j;
    for (i=1 ; i<=30 ; i++ ){
       for (j=1;j<=30-i;j++){
     printf(" ");
     }
    for(j=1;j<=i*2-1;j++){
    printf("*");
    }
    printf("\n");
    }
      return 0 ;
}

