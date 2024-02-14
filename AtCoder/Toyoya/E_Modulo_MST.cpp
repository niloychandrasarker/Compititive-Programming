#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find(vector<int>& parent, int i) {
    if (parent[i] == i) {
        return i;
    }
    return find(parent, parent[i]);
}

void unionSet(vector<int>& parent, vector<int>& rank, int x, int y) {
    int xroot = find(parent, x);
    int yroot = find(parent, y);
    if (rank[xroot] < rank[yroot]) {
        parent[xroot] = yroot;
    } else if (rank[xroot] > rank[yroot]) {
        parent[yroot] = xroot;
    } else {
        parent[yroot] = xroot;
        rank[xroot] += 1;
    }
}

int kruskal(vector<vector<int>>& graph, int N, int K) {
    vector<int> parent(N+1);
    vector<int> rank(N+1, 0);
    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }
    sort(graph.begin(), graph.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
    });
    int min_cost = 0;
    int edges_added = 0;

    for (const auto& edge : graph) {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        int x = find(parent, u);
        int y = find(parent, v);
        if (x != y) {
            unionSet(parent, rank, x, y);
            min_cost += w;
            edges_added += 1;
            if (edges_added == N-1) {
                break;
            }
        }
    }

    return min_cost % K;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> graph(M, vector<int>(3));
    for (int i = 0; i < M; i++) {
        cin >> graph[i][0] >> graph[i][1] >> graph[i][2];
    }

    int min_cost = kruskal(graph, N, K);
    cout << min_cost << endl;

    return 0;
}