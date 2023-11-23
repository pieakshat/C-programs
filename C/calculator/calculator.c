#include<stdio.h>
int main()
{
  float a, b;
  char op;
  printf("enter operator: ");
  scanf("%c", &op);
  printf("enter the value of a and b: ");
  scanf("%f%f", &a, &b);
  

  switch(op){
     case '+': 
     printf("answer: %f", (a+b));
     break;
     case '-':
     printf("answer: %f", (a-b));
     break;
     case '*':
     printf("answer: %f", (a*b));
     break;
     case '/':
     printf("answer: %f", (a/b));
     break;
   
  }
}
  
    

