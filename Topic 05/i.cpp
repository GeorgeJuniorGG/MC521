#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findBooks(vector<int> prices, int n, int m) {
    int pos, sum, ans, ans1;
    sum = 0;
    ans = 0;
    ans1 = m;

    for(pos = 0; pos < n; pos++) {
            
        if(binary_search(prices.begin(), prices.end(), m - prices[pos])) {
            if(abs(prices[pos] - (m - prices[pos])) < abs(ans-ans1)) {
                ans = prices[pos];
                ans1 = m - ans;
            }
        }
    }

    if(ans < ans1) {
        cout << "Peter should buy books whose prices are " << ans << " and " << ans1 << "." << endl;
    }
    else {
        cout << "Peter should buy books whose prices are " << ans1 << " and " << ans << "." << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n, m, aux;

    while(cin >> n) {
        vector<int> prices;

        for(int i = 0; i < n; i++) {
            cin >> aux;
            prices.push_back(aux);
        }

        cin >> m;

        sort(prices.begin(), prices.end());

        findBooks(prices, n, m);

        cout << endl;
    }

    return 0;
}