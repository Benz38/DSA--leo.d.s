#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Graph
{
    map<T, list<T, >> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
}

main()
{
    Graph<int> g;

    return 0;
}