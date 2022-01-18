#include <stdio.h>
#include <stdbool.h>

bool ifprime(int t)
{
    int i = t;
    if (i == 2)
    {
        return 1;
    }
    else if (i == 3)
    {
        return 1;
    }
    else if (i == 5)
    {
        return 1;
    }
    else if (i == 7)
    {
        return 1;
    }
    else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int n, x, i, *a, j = 0, k = 0, l = 2, t, ln = 0, size = 0;
    scanf("%d%d", &n, &x);
    while (l - 2 != n)
    {
        if (ifprime(l))
            size++;
        l++;
    }
    a = (int *)malloc(size * sizeof(int));
    for (i = 2; i <= n; i++)
    {
        if (ifprime(i))
        {
            a[j] = i;
            j++;
        }
    }
    while (k + 1 != j)
    {
        t = a[k] + a[k + 1] + 1;
        if (ifprime(t) && t <= n)
            ln++;
        k++;
    }
    if (ln >= x)
        printf("YES");
    else
        printf("NO");
    return 0;
}