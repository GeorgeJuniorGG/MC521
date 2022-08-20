#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux, q;
    vector<int> prices;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> aux;
        prices.push_back(aux);
    }

    sort(prices.begin(), prices.end());

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> aux;
        cout << upper_bound(prices.begin(), prices.end(), aux) - prices.begin() << endl;
    }

    return 0;
}