#include <iostream>

using namespace std;

int main() {
    int t, a, b;
    unsigned long long ans;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a;
        cin >> b;

        if (a == 0) {
            ans = 1;
        }
        else {
            ans = 2 * b + a + 1;
        }

        cout << ans << endl;
    }

    return 0;
}