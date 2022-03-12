#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d;
    int ans = 0;
    // Bitwise operator
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        ans = ans ^ d;
    }

    cout << ans << endl;

    return 0;
}