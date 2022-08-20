#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, aux, max;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> jumps;
        max = 0;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            jumps.push_back(aux);
        }

        for (int j = n - 1; j >= 0; j--)
        {
            aux = j + jumps[j];
            if (aux > n - 1)
            {
                if (jumps[j] > max)
                {
                    max = jumps[j];
                }
            }
            else
            {
                jumps[j] += jumps[aux];
                j++;
            }
        }

        cout << max << endl;
    }

    return 0;
}