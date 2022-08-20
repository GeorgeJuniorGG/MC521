#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, l, k, aux;
    cin >> n;
    cin >> l;
    cin >> k;

    long long int time;
    long long int min;

    vector<int> signs;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        signs.push_back(aux);
    }

    vector<int> speeds;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        speeds.push_back(aux);
    }

    int accum[n + 1][k];

    for (int i = 0; i < k; i++)
    {
        accum[0][i] = 0;
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < k; j++)
        {
            accum[i][j] = 10000 * l;
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (j >= i)
            {
                accum[i][j] = -1;
            }
        }
    }

    cout << time << endl;

    return 0;
}