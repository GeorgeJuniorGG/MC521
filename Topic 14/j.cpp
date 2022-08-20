#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, aux, max;
    cin >> n;
    cin >> k;

    vector<int> speeds;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        speeds.push_back(aux);
    }

    sort(speeds.begin(), speeds.end());

    max = speeds[n - k];

    cout << max << endl;

    return 0;
}