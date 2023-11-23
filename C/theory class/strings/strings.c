#include <stdio.h>
int main()
{
    int limit;
    scanf("%d", &limit);
    int a[limit], b[limit], c[limit];
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < limit; j++)
    {
        scanf("%d", &b[j]);
    }
    for (int k = 0; k < limit; k++)
    {
        c[k] = a[k] + b[k];
        printf("%d ", c[k]);
    }
}