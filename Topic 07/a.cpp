#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, q, l, r;
    cin >> n;
    cin >> q;

    vector<int> accumulator;

    char song[n];
    scanf("%s", song);

    accumulator.push_back(0);

    for (int i = 1; i <= n; i++) {
        accumulator.push_back(accumulator[i-1] + (song[i - 1] - 'a' + 1));
    }

    for (int i = 0; i < q; i++) {
        cin >> l;
        cin >> r;

        cout << accumulator[r] - accumulator[l - 1] << endl;;
    }

    return 0;
}