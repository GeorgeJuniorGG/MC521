#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n % m; i++)
    {
        cout << n / m + 1 << " ";
    }
    for (int i = 0; i < m - (n % m); i++)
    {
        cout << n / m << " ";
    }
    cout << endl;

    return 0;
}