#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int k, n, w, amount;

    cin >> k;
    cin >> n;
    cin >> w;

    amount = k * (w + 1)* w / 2;

    if (amount - n < 0) {
        cout << 0 << endl;
    }

    else {
        cout << amount - n << endl;
    }

    return 0;
}