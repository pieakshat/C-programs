#include<stdio.h>

int main()
{
long int a, b, q, r;
printf("enter a and b: ");
scanf("%ld %ld", &a, &b);
//applyig euclid's algorithm
printf("\neuclid's algorithm: %ld=%ld*(q)+r", a, b);
while(r != 0)
{
    r=a%b;
    q=(a-r)/b;
    printf("\n%ld=%ld*(%ld)+%ld",a,b,q,r);
    a=b;
    b=r;
}



}
