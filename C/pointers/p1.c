#include <stdio.h>

int main()
{
   int x=5; 
   int *p=&x;
   int **q=&p; 
   int ***r=&q;
   printf("%d\n",*p);
   printf("%d\n",*p);
}

