#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, s, aux;
    cin >> n;
    cin >> s;

    bool possible = false;

    vector<int> straight;
    vector<int> reverse;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        straight.push_back(aux);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        reverse.push_back(aux);
    }

    if (straight[0] == 1)
    {
        if (straight[s - 1] == 1)
        {
            possible = true;
        }
        else
        {
            for (int i = s; i < n; i++)
            {
                if (straight[i] == 1 && reverse[s - 1] == 1 && reverse[i] == 1)
                {
                    possible = true;
                    break;
                }
            }
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}