#include <stdio.h>
#include <stdlib.h>

#define MAXN 200005

typedef struct {
    int vertex;
    int next;
} Edge;

int adj[MAXN];
int edges[MAXN];
Edge tree[MAXN * 2];
int k;

void addEdge(int u, int v) {
    tree[k].vertex = v;
    tree[k].next = adj[u];
    adj[u] = k++;
}

int dfs(int u, int parent) {
    int cnt = 0;
    for (int i = adj[u]; i != -1; i = tree[i].next) {
        int v = tree[i].vertex;
        if (v == parent) continue;
        int subtree = dfs(v, u);
        if (subtree % 2 == 0) {
            edges[k++] = i / 2 + 1;
        } else {
            cnt += subtree;
        }
    }
    return cnt + 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            adj[i] = -1;
        }
        k = 0;

        for (int i = 1; i < n; i++) {
            int u, v;
            scanf("%d %d", &u, &v);
            addEdge(u, v);
            addEdge(v, u);
        }

        k = 0;
        int numCuts = dfs(1, -1);

        if (numCuts % 2 == 1) {
            printf("-1\n");
        } else {
            printf("%d\n", numCuts / 2);
            for (int i = 0; i < numCuts / 2; i++) {
                printf("%d ", edges[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
