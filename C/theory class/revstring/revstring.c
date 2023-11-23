#include <stdio.h>

int main()
{
    char s1[20];
    printf("enter string: ");
    scanf("%s", s1);
    int l = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        l++;
    }
    char s2[l];
    l--;
    int k = 0;

    for (int j = l; j >= 0; j--)
    {
        s2[k] = s1[j];
        k++;
    }
    printf("%s", s2);
}