#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k, aux;
    cin >> n;
    cin >> k;

    int acumulador = 0;
    int pos, posmax;
    int max;

    vector<int> fence;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        fence.push_back(aux);
    }

    for (int i = 0; i < k; i++) {
        acumulador += fence[i];
        pos = 0;
        max = acumulador;
        posmax = pos;
    }

    for (int i = 1; i <= n - k; i++) {
        acumulador = acumulador - fence[i-1] + fence[i + k - 1];
        if (acumulador < max) {
            max = acumulador;
            pos = i;
        }
    }

    cout << pos + 1 << endl;

    return 0;
}