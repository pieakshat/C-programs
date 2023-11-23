#include <stdio.h>

int main()
{
    int limit;
    printf("enter limit: ");
    scanf("%d", &limit);
    int arr[limit];
    printf("enter the numbers: ");
    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int j = 0; j < limit; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
        if (min > arr[j])
        {
            min = arr[j];
        }
    }
    printf("max: %d", max);
    printf("\nmin: %d", min);
}