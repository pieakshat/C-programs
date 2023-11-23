#include<stdio.h>
int main()
{
    int c=0;
    char s1[20], s2[20];
    printf("enter string: ");
    scanf("%s", s1);
    for (int i=0; s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
        c++;
    }
for (int j=0; j<c; j++)
{
    printf("%c", s2[j]);
}
}