#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, m, S, T, ai, bi, u;
    long long int d, wi;

    cin >> t;

    for(int i = 0; i < t; i++){
        
        cout << "Case #" << i+1 << ": ";
        cin >> n;
        cin >> m;
        cin >> S;
        cin >> T;

        vector<vector<pair<int,long long int>>> graph(n);

        for (int j = 0; j < m; j++) {
            cin >> ai;
            cin >> bi;
            cin >> wi;
            graph[ai].push_back(make_pair(bi,wi));
            graph[bi].push_back(make_pair(ai,wi));
        }

        priority_queue< pair<int,long long int>, vector<pair<int,long long int>>, greater<pair<int,long long int>>> priority;
        vector<long long int> distancias(n, 9223372036854775807);
        vector<int> predecessores(n, -1);
        
        distancias[S] = 0;
        priority.push(make_pair(distancias[S], S));

        while(!priority.empty()) {
            pair<int, long long int> front = priority.top();
            priority.pop();
            d = front.first;
            u = front.second;
            if (d > distancias[u]) {
                continue;
            }
            for(int j = 0; j < graph[u].size(); j++) {
                pair<int, int> v = graph[u][j];
                if(distancias[u] + v.second < distancias[v.first]) {
                    distancias[v.first] = distancias[u] + v.second;
                    predecessores[v.first] = u;
                    priority.push(make_pair(distancias[v.first], v.first));
                }
            }
        }
        
        if(distancias[T] == 9223372036854775807) {
            cout << "unreachable" << endl;
        }

        else {
            cout << distancias[T] << endl;
        }    
    }
    return 0;
}