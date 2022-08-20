#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, M, S, posX, posY, newX, newY, count;
    char dir, aux;
    cin >> N;
    cin >> M;
    cin >> S;

    while (N != 0 && M != 0 && S != 0)
    {
        count = 0;
        char map[N + 2][M + 2];

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                cin >> map[i][j];

                if (map[i][j] == 'N' || map[i][j] == 'S' || map[i][j] == 'L' || map[i][j] == 'O')
                {
                    posX = i;
                    posY = j;
                    dir = map[i][j];
                }
            }
        }
        for (int j = 0; j < M + 2; j++)
        {
            map[0][j] = '#';
        }
        for (int j = 0; j < M + 2; j++)
        {
            map[N + 1][j] = '#';
        }
        for (int i = 0; i < N + 2; i++)
        {
            map[i][0] = '#';
        }
        for (int i = 0; i < N + 2; i++)
        {
            map[i][M + 1] = '#';
        }

        for (int i = 0; i < S; i++)
        {
            cin >> aux;
            if (dir == 'N')
            {
                if (aux == 'D')
                {
                    dir = 'L';
                }
                else if (aux == 'E')
                {
                    dir = 'O';
                }
                else if (aux == 'F')
                {
                    newX = posX - 1;
                    newY = posY;
                }
            }
            else if (dir == 'S')
            {
                if (aux == 'D')
                {
                    dir = 'O';
                }
                else if (aux == 'E')
                {
                    dir = 'L';
                }
                else if (aux == 'F')
                {
                    newX = posX + 1;
                    newY = posY;
                }
            }
            else if (dir == 'L')
            {
                if (aux == 'D')
                {
                    dir = 'S';
                }
                else if (aux == 'E')
                {
                    dir = 'N';
                }
                else if (aux == 'F')
                {
                    newX = posX;
                    newY = posY + 1;
                }
            }
            else
            {
                if (aux == 'D')
                {
                    dir = 'N';
                }
                else if (aux == 'E')
                {
                    dir = 'S';
                }
                else if (aux == 'F')
                {
                    newX = posX;
                    newY = posY - 1;
                }
            }

            if (aux == 'F')
            {
                if (map[newX][newY] == '#')
                {
                    posX = posX;
                    posY = posY;
                }
                else
                {
                    if (map[newX][newY] == '*')
                    {
                        count++;
                        map[newX][newY] = '.';
                    }
                    posX = newX;
                    posY = newY;
                }
            }
        }

        cout << count << endl;

        cin >> N;
        cin >> M;
        cin >> S;
    }

    return 0;
}