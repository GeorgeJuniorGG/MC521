#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, ax, ay, bx, by, cx, cy;
    cin >> n;
    cin >> ax;
    cin >> ay;
    cin >> bx;
    cin >> by;
    cin >> cx;
    cin >> cy;

    if (ax < cx && ax > bx || ax < bx && ax > cx)
    {
        cout << "NO" << endl;
    }
    else if (ay < cy && ay > by || ay < by && ay > cy)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}