#include<stdio.h>
int main()
{
  int fact=1, num, flag=0,choice;
  printf("what operation do you want  1. to check if number is prime   2. factorial");
  scanf("%d", &choice);

  switch(choice){
  case 1:
  printf("enter number: ");
  scanf("%d", &num);
  for (int i=2;i<num; i++)
  {
    if (num%i==0){
      flag=1;
    }
    }

    if (flag==1){
      printf("%d is not prime", num);
    }
    else{
      printf("%d is prime", num);
    }

    case 2: 
    //int fact=1; num;
    printf("enter number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
      fact=fact*i;
    }
    printf("factorial: %d", fact);

    }
    }