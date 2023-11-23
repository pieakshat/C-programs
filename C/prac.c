#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    int arr[1000];
    scanf("%s", s);
    int p = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        arr[i] = 0;
        for (int j = 0; j <= strlen(s); j++)
        {
            if (s[i] == s[j])
            {
                arr[i]++;
                p++;
            }
        }
    }
    for (int k = 0; k <= p; k++)
    {
        printf("%d\t", arr[k]);
    }
    return 0;
}