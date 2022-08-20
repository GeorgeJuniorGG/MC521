#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void find_degree(vector<pair<int, int>> perm, vector<pair<int, int>>::iterator start, vector<pair<int, int>>::iterator end, int level)
{
    if (start != end)
    {
        vector<pair<int, int>>::iterator max;
        max = max_element(start, end);
        (*max).second = level;
        level += 1;
        find_degree(perm, start, max, level);
        find_degree(perm, ++max, end, level);
    }
}

int main(int argc, char const *argv[])
{
    int t, n, aux;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<pair<int, int>> perm;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            perm.push_back(make_pair(aux, 0));
        }

        find_degree(perm, perm.begin(), perm.end(), 0);

        for (int j = 0; j < n; j++)
        {
            cout << perm[j].second << " ";
        }
        cout << endl;
    }

    return 0;
}