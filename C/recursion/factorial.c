#include <stdio.h>

int fact(n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = fact(n);
    printf("%d", ans);
}