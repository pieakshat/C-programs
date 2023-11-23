#include <stdio.h>

int sum_of_previous3(int a, int b, int c, int n)
{
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
    else
        return sum_of_previous3(a, b, c, n - 1) + sum_of_previous3(a, b, c, n - 2) + sum_of_previous3(a, b, c, n - 3);
}

int main()
{
    int a, b, c, n; // n is the nth term that you want to find
    scanf("%d %d %d %d", &a, &b, &c, &n);
    int ans = sum_of_previous3(a, b, c, n);
    printf("%d", ans);
    return 0;
}