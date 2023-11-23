#include <stdio.h>

int main()
{
    char s1[30], s2[30], s3[30];
    scanf("%s", s1);
    scanf("%s", s2);
    int k = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        s1[i] = s3[k];
        k++;
    }
    for (int j = 0; s2[j] != '\0'; j++)
    {
        s2[j] = s3[k];
        k++;
    }
    for (int p = 0; p < k; p++)
    {
        printf("%c", s3[p]);
    }
}