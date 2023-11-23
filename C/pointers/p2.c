#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int)); //(int*) is used for typecasting that is converting one datatype to another

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int *b = (int *)realloc(arr, 2 * n * sizeof(int));
    printf("previous block address: %d, new block address: %d", arr, b);

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
