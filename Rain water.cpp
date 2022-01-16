#include <bits/stdc++.h>
using namespace std;

int water(int a[], int n)
{
    int left[n]; /// 3 1 2 4 0 1 3 2
    int right[n];

    left[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], a[i]); // max( 4 , 7) ==> 7
    }

    right[n - 1] = a[n - 1];

    for (int i = n - 2; i >= 0; i--) // 3 1 2 4 0 1 3 2
    {
        right[i] = max(right[i + 1], a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(left[i], right[i]) - a[i];
    }
    return ans;
}

int main()
{
    int a[] = {4, 2, 0, 3, 2, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "size : " << n << endl;

    cout << "water hold : " << water(a, n) << endl;

    return 0;
}