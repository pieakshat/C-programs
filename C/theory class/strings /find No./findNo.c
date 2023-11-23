#include <stdio.h>

int main()
{
    int limit, num, flag = 0, j;
    printf("enter limit: ");
    scanf("%d", &limit);
    int arr[limit];
    printf("enter the numbers: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nenter number to find: ");
    scanf("%d", &num);
    for (int j = 0; j < limit; j++)
    {
        if (arr[j] == num)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("\n%d is present in %d location", num, j + 1);
    }
    else
    {
        printf("number is not present in the array");
    }
}