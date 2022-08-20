
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cin >> n;

    int vectors[n][3];

    for (int i = 0; i < n; i++) {
        cin >> vectors[i][0];
        cin >> vectors[i][1];
        cin >> vectors[i][2];
    }

    int x = 0;
    int y = 0;
    int z = 0;

    for (int i = 0; i < n ; i++) {
        x += vectors[i][0];
        y += vectors[i][1];
        z += vectors[i][2];
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl;
    }

    else {
        cout << "NO" << endl;
    }

    return 0;
}
