#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, aux, n, sum;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> coins;
        vector<int> usedCoins;

        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            coins.push_back(aux);
        }

        usedCoins.push_back(coins[0]);
        sum = coins[0];
        for (int j = 1; j < n; j++)
        {
            if (j == n - 1)
            {
                sum += coins[j];
                usedCoins.push_back(coins[j]);
            }
            else if (sum + coins[j] < coins[j + 1])
            {
                sum += coins[j];
                usedCoins.push_back(coins[j]);
            }
        }
        cout << usedCoins.size() << endl;
    }

    return 0;
}