#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    bool equal;
    cin >> n;

    while (n != 0)
    {
        int max = 0;
        int people = 0;
        vector<vector<int>> matrix;
        vector<int> popularity;

        for (int i = 0; i < n; i++)
        {
            vector<int> aux = {0, 0, 0, 0, 0};
            cin >> aux[0];
            cin >> aux[1];
            cin >> aux[2];
            cin >> aux[3];
            cin >> aux[4];

            sort(aux.begin(), aux.end());

            if (i == 0)
            {
                matrix.push_back(aux);
                popularity.push_back(1);
            }

            else
            {
                equal = true;

                for (int j = 0; j < matrix.size(); j++)
                {
                    for (int k = 0; k < 5; k++)
                    {
                        if (aux[k] != matrix[j][k])
                        {
                            equal = false;
                            break;
                        }

                        else if (k == 4)
                        {
                            equal = true;
                        }
                    }

                    if (equal)
                    {
                        popularity[j]++;
                        break;
                    }
                }

                if (!equal)
                {
                    popularity.push_back(1);
                    matrix.push_back(aux);
                }
            }
        }

        for (int i = 0; i < popularity.size(); i++)
        {
            if (popularity[i] > max)
            {
                max = popularity[i];
            }
        }

        for (int i = 0; i < popularity.size(); i++)
        {
            if (popularity[i] == max)
            {
                people += popularity[i];
            }
        }

        cout << people << endl;

        cin >> n;
    }

    return 0;
}
