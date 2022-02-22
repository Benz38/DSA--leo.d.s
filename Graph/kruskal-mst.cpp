#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <climits>
using namespace std;

struct Node {
    int index;
    vector<Node*> neighbors;
    vector<int> nei_weights;
    Node(int i) {
        index = i;
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    Node** graph = new Node*[N + 1];
    for (int i = 1; i <= N; i++) {
        graph[i] = new Node(i);
    }
    for (int i = 0; i < M; i++) {
        int x, y, r;
        cin >> x >> y >> r;
        graph[x]->neighbors.push_back(graph[y]);
        graph[y]->neighbors.push_back(graph[x]);
        graph[x]->nei_weights.push_back(r);
        graph[y]->nei_weights.push_back(r);
    }
    int S;
    cin >> S;
    Node* start = graph[S];
    unordered_set<Node*> existing;
    existing.insert(start);
    int total_weights = 0;
    for (int i = 0; i < N - 1; i++) {
        int min_index = -1;
        int min_distance = INT_MAX;
        for (auto it = existing.begin(); it != existing.end(); it++) {
            for (int j = 0; j < (*it)->neighbors.size(); j++) {
                if (existing.find((*it)->neighbors[j]) == existing.end()) {
                    if ((*it)->nei_weights[j] < min_distance) {
                        min_distance = (*it)->nei_weights[j];
                        min_index = (*it)->neighbors[j]->index;
                    }
                }
            }
        }
        existing.insert(graph[min_index]);
        total_weights += min_distance;
    }
    cout << total_weights << endl;
    return 0;
}