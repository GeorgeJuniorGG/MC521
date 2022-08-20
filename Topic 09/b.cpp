#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, d, aux, prev, minMi, opt1, opt2, opt3, opt4, index, aux2, ans;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> d;

        vector<int> tests;
        vector<int> mis;

        minMi = d;
        prev = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            tests.push_back(aux);
            mis.push_back(aux - prev - 1);

            if (aux - prev - 1 < minMi)
            {
                minMi = aux - prev - 1;
                index = j;
            }

            prev = aux;
        }

        aux2 = tests[index];
        if (index > 0)
        {
            tests[index] = tests[index - 1];
        }
        else
        {
            tests[index] = 0;
        }

        opt1 = d - tests[n - 1] - 1;

        opt3 = d;
        aux = 0;
        prev = 0;
        for (int j = 0; j < n; j++)
        {
            if (j == index)
            {
                continue;
            }
            if (tests[j] - prev - 1 < opt3)
            {
                opt3 = tests[j] - prev - 1;
            }
            if (tests[j] - prev - 1 > aux)
            {
                aux = tests[j] - prev - 1;
            }
            prev = tests[j];
        }

        if (aux % 2 == 1 || aux == 0)
        {
            opt2 = (aux - 1) / 2;
        }
        else
        {
            opt2 = (aux - 2) / 2;
        }

        ans = min(opt3, max(opt1, opt2));

        tests[index] = aux2;
        if (index > 0)
        {
            tests[index - 1] = aux2;
        }
        else
        {
            tests[index] = 0;
        }

        if (index == n - 1)
        {
            opt1 = d - tests[n - 1] - 1;
        }

        opt4 = d;
        aux = 0;
        prev = 0;
        for (int j = 0; j < n; j++)
        {
            if (j == index)
            {
                continue;
            }
            if (tests[j] - prev - 1 < opt4)
            {
                opt4 = tests[j] - prev - 1;
            }
            if (tests[j] - prev - 1 > aux)
            {
                aux = tests[j] - prev - 1;
            }
            prev = tests[j];
        }

        if (aux % 2 == 1 || aux == 0)
        {
            opt2 = (aux - 1) / 2;
        }
        else
        {
            opt2 = (aux - 2) / 2;
        }

        ans = max(ans, min(opt4, max(opt1, opt2)));

        cout << ans << endl;
    }

    return 0;
}