#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

priority_queue<pair<int,int>> pq;
vector<int> taken;

void process(int vtx, vector<vector<pair<int, int>>> &graph) {
    taken[vtx] = 1;
    for (int j = 0; j < (int)graph[vtx].size(); j++) {
        pair<int, int> v = graph[vtx][j];
        if(!taken[v.first]) {
            pq.push({-v.second, -v.first});
        }
    }
}

int prim(vector<vector<pair<int, int>>> &graph, int vertices) {
    int u, w;
    int minCost = 0;
    taken.assign(vertices, 0);
    process(0, graph);
    while (!pq.empty()) {
        pair<int, int> front = pq.top();
        pq.pop();
        u = -front.second;
        w = -front.first;
        if(!taken[u]) {
            minCost += w;
            process(u, graph);
        }
    }
    return minCost;
}

int main(int argc, char const *argv[])
{
    int vertices, arestas, custoMin, custo;
    int ai, bi, ci;
    scanf("%d %d", &vertices, &arestas);
    while (vertices != 0) {
        custo = 0;

        vector<vector<pair<int, int>>> graph(vertices);

        for (int j = 0; j < arestas; j++) {
            scanf("%d %d %d", &ai, &bi, &ci);
            graph[ai].push_back({bi,ci});
            graph[bi].push_back({ai,ci});
            custo += ci;
        }

        custoMin = prim(graph, vertices);

        printf("%d\n", custo-custoMin);

        scanf("%d %d", &vertices, &arestas);
    }

    return 0;
}