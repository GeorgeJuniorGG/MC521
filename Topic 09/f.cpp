#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux, maxPieces, count, min, rest;
    cin >> n;

    while (n != 0)
    {
        vector<int> sizes;
        for (int i = 0; i < n; i++)
        {
            cin >> aux;
            sizes.push_back(aux);
        }
        sort(sizes.begin(), sizes.end());

        maxPieces = 0;
        count = 0;
        aux = sizes[0];
        for (int i = 0; i < n; i++)
        {
            if (sizes[i] == aux)
            {
                count++;
                if (count > maxPieces)
                {
                    maxPieces = count;
                }
            }
            else
            {
                if (count > maxPieces)
                {
                    maxPieces = count;
                }
                count = 1;
            }
            aux = sizes[i];
        }
        cout << maxPieces << endl;

        min = sizes.size() / maxPieces;
        rest = sizes.size() % maxPieces;

        for (int i = 0; i < maxPieces; i++)
        {
            count = 0;
            while (count < min)
            {
                if (count == min - 1)
                {
                    cout << sizes[count * maxPieces + i];
                }
                else
                {
                    cout << sizes[count * maxPieces + i] << " ";
                }
                count++;
            }
            if (rest > 0)
            {
                cout << " " << sizes[count * maxPieces + i];
                rest--;
            }
            cout << endl;
        }

        cin >> n;
        if (n != 0)
        {
            cout << endl;
        }
    }

    return 0;
}