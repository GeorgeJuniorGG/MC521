#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    unsigned long long aux;

    for (int i = 0; i < t; i++) {
        cin >> n;

        if (n > 19) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            aux = 1;
            cout << aux << " ";
            for (int j = 1; j < n; j++) {
                aux *= 3;
                cout << aux << " ";
            }
            cout << endl;
        }
    }

    return 0;
}