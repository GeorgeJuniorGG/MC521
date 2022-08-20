#include <iostream>

using namespace std;

int rhombus(int n, int four) {
    if (n == 1) {
        return 1;
    }
    return rhombus(n - 1, four - 1) + four*4;
}

int main(int argc, char const *argv[])
{
    int n, result;
    cin >> n;

    result = rhombus(n, n - 1);

    cout << result << endl;

    return 0;
}