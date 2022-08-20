#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int R, C, x, y;
    char aux;
    cin >> R;
    cin >> C;

    vector<pair<int, int>> wolves;
    char map[R + 2][C + 2];
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cin >> aux;
            if (aux == '.')
            {
                aux = 'D';
            }
            map[i][j] = aux;

            if (aux == 'W')
            {
                wolves.push_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < R + 2; i++)
    {
        map[i][0] = 'D';
    }
    for (int i = 0; i < R + 2; i++)
    {
        map[i][C + 1] = 'D';
    }
    for (int j = 0; j < C + 2; j++)
    {
        map[R + 1][j] = 'D';
    }
    for (int j = 0; j < C + 2; j++)
    {
        map[0][j] = 'D';
    }

    for (int i = 0; i < wolves.size(); i++)
    {
        x = wolves[i].first;
        y = wolves[i].second;

        if (map[x][y + 1] == 'S' || map[x][y - 1] == 'S' || map[x + 1][y] == 'S' || map[x - 1][y] == 'S')
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}