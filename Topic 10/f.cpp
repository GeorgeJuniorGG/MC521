#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t, aux;
    cin >> n;
    cin >> t;

    vector<int> portals;
    vector<int> visited;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        portals.push_back(aux + i + 1);
        visited.push_back(0);
    }

    aux = 1;
    while (visited[aux - 1] == 0)
    {
        visited[aux - 1] = 1;
        if (portals[aux - 1] == t)
        {
            cout << "YES" << endl;
            return 0;
        }
        aux = portals[aux - 1];
    }

    cout << "NO" << endl;

    return 0;
}