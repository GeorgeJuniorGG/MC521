#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, b, d, aux, maxY;
    int maxP = 0;
    cin >> n;

    vector<int> bornYears;
    vector<int> diedYears;

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        cin >> d;

        bornYears.push_back(b);
        diedYears.push_back(d);
    }

    sort(bornYears.begin(), bornYears.end());
    sort(diedYears.begin(), diedYears.end());

    vector<int>::iterator it = diedYears.begin();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (bornYears[i] < *it)
        {
            sum++;
        }
        else
        {
            it++;
            sum--;
            i--;
        }

        if (sum > maxP)
        {
            maxP = sum;
            maxY = bornYears[i];
        }
    }

    cout << maxY << " " << maxP << endl;

    return 0;
}