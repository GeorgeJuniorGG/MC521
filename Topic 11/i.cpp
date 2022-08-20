#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, d, u, ai, bi, wi;
    cin >> n;
    cin >> m;

    vector<vector<pair<int,long long int>>> graph(n);

    for (int j = 0; j < m; j++) {
        cin >> ai;
        cin >> bi;
        cin >> wi;
        graph[ai-1].push_back(make_pair(bi-1,wi));
        graph[bi-1].push_back(make_pair(ai-1,wi));
    }

    priority_queue< pair<int,long long int>, vector<pair<int,long long int>>, greater<pair<int,long long int>>> priority;
    vector<long long int> distancias(n, 9223372036854775807);
    vector<int> predecessores(n, -1);

    distancias[0] = 0;
    priority.push(make_pair(distancias[0], 0));

    while(!priority.empty()) {
        pair<int, int> front = priority.top();
        priority.pop();
        d = front.first;
        u = front.second;
        if (d > distancias[u]) {
            continue;
        }
        for(int j = 0; j < graph[u].size(); j++) {
            pair<int,int> v = graph[u][j];
            if(distancias[u] + v.second < distancias[v.first]) {
                distancias[v.first] = distancias[u] + v.second;
                predecessores[v.first] = u;
                priority.push(make_pair(distancias[v.first], v.first));
            }
        }
    }

    if(distancias[n-1] == 9223372036854775807) {
        cout << -1 << endl;
    }

    else {
        vector<int> path;
        int aux;
        path.push_back(n-1);
        aux = predecessores[n-1];
        while(aux != -1) {
            path.push_back(aux);
            aux = predecessores[aux];
        }

        for(int i = path.size()-1; i >= 0; i--) {
            cout << path[i] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}