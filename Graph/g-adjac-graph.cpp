#include <bits/stdc++.h>
using namespace std;

int main()
{

    int v, e;
    cin >> v >> e;
    int g[v + 1][v + 1];
    for (int i = 0; i < (v + 1); i++)
    {
        for (int j = 0; j < (v + 1); j++)
        {
            g[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x][y] = 1;
        g[y][x] = 1;
    }

    for (int i = 1; i <= v; i++)
    {
        cout << i << "--->";
        for (int j = 1; j <= v; j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

//----- input

// 6 5
// 1 2
// 2 3
// 3 4
// 1 4
// 4 5

//---- output
// 1--->0 1 0 1 0 0
// 2--->1 0 1 0 0 0
// 3--->0 1 0 1 0 0
// 4--->1 0 1 0 1 0
// 5--->0 0 0 1 0 0
// 6--->0 0 0 0 0 0
