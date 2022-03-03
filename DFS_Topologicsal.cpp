#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{

    map<T, list<T>> l;

public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfs_helper(T src, map<T, bool> &visited)
    {

        cout << src << " ";
        visited[src] = true;

        for (auto nbr : l[src])
        {
            if (!visited[nbr])
            {
                dfs_helper(nbr, visited);
            }
        }
    }
    int cnt = 0;
    void dfs(T src)
    {
        map<T, bool> visited;

        for (auto p : l)
        {
            T node = p.first;
            visited[node] = false;
        }

        for (auto p : l)
        {
            T node = p.first;
            if (!visited[node])
            {
                cout << "component " << cnt << "-->";
                dfs_helper(node, visited);
                cnt++;
                cout << endl;
            }
        }

        // dfs_helper(src, visited);
    }
};

int main()
{
    Graph<int> g;

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(4, 1);
    g.addEdge(3, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.addEdge(5, 6);
    g.addEdge(6, 7);
    g.addEdge(8, 8);

    g.dfs(0);

    return 0;
}