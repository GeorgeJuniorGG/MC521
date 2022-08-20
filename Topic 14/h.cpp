#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, pawns;
    char aux;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        pawns = 0;
        cin >> n;

        vector<char> enemies;
        vector<char> Gregor;

        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            enemies.push_back(aux);
        }
        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            Gregor.push_back(aux);
        }

        for (int j = 0; j < n; j++)
        {
            if (enemies[j] == '0')
            {
                if (Gregor[j] == '1')
                {
                    pawns++;
                    Gregor[j]--;
                    enemies[j] = 2;
                }
            }
            else if (enemies[j] == '1')
            {
                if (j > 0)
                {
                    if (Gregor[j - 1] == '1')
                    {
                        pawns++;
                        Gregor[j - 1]--;
                    }
                    else if (j != n - 1)
                    {
                        if (Gregor[j + 1] == '1')
                        {
                            pawns++;
                            Gregor[j + 1]--;
                        }
                    }
                }
                else
                {
                    if (Gregor[j + 1] == '1')
                    {
                        pawns++;
                        Gregor[j + 1]--;
                    }
                }
            }
        }
        cout << pawns << endl;
    }

    return 0;
}