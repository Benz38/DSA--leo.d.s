#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 'a');
    for (auto it : v)
    {
        cout << it << endl;
    }
    cout << endl;
    vector<int> w(v.begin(), v.end());
    for (auto it : w)
    {
        cout << it << endl;
    }
    return 0;
}