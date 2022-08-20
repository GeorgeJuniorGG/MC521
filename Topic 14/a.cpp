#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, aux, counter;
    bool possible, repeated;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        possible = true;
        repeated = true;
        counter = 1;
        cin >> n;
        vector<int> numbers;

        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            while (aux > n)
            {
                aux = aux / 2;
            }
            numbers.push_back(aux);
        }

        sort(numbers.begin(), numbers.end());

        while (repeated)
        {
            repeated = false;
            for (int j = 0; j < n; j++)
            {
                if (j > 0)
                {
                    if (numbers[j] == numbers[j - 1])
                    {
                        numbers[j] = numbers[j] / 2;
                        repeated = true;
                    }
                }
            }

            sort(numbers.begin(), numbers.end());

            if (n > 1 && numbers[1] == 1)
            {
                possible = false;
                break;
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
    }

    return 0;
}