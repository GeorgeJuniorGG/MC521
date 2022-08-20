#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int r, g, b;
    cin >> r;
    cin >> g;
    cin >> b;

    int count = 0;
    while (r > 0 || g > 0 || b > 0) {
        if (count % 3 == 0) {
            r -= 2;
        }
        else if (count % 3 == 1) {
            g -= 2;
        }
        else if (count % 3 == 2) {
            b -= 2;
        }

        count ++;
    }

    count += 29;

    cout << count << endl;

    return 0;
}