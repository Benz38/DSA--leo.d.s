#include <bits/stdc++.h>
using namespace std;

int bubble(int a[], int n)
{

    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
    }
    bubble(a, n - 1);
}

int main()
{
    int a[] = {4, 5, 2, 3, 1};
    int n = 5;

    cout << bubble(a, n);
    return 0;
}