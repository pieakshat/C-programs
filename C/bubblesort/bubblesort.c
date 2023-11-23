#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n) // n is size of array
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {15, 43, 23, 56, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("orignal array");
    printarray(arr, size);

    bubblesort(arr, size);

    printf("array in ascending order");
    printarray(arr, size);
}