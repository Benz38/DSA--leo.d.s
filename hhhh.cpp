#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        float m1 = (y2 - y1) / (x2 - x1);
        float m2 = (y4 - y3) / (x4 - x3);

        if (m1 == m2)
        {
            if (((x1 == x3) && (y1 == y3)) || ((x1 == x4) && (y1 == y4)) || ((x2 == x3) && (y2 == y3)) || ((x2 == x4) && (y2 == y4)))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}