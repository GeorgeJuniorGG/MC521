#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, m, k;
    cin >> t;

    for (int i = 0; i < t; i ++) {
        cin >> n;
        cin >> m;
        cin >> k;

        if (1 * (m-1) + m * (n-1) == k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}