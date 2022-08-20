#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    long long max =  -2147483647;
    long long aux;
    int n, plus, minus, a, b, c, d, e;
    string name, leader;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> plus;
        cin >> minus;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;

        aux = 100*plus - 50*minus + a + b + c + d + e;
        if(aux > max) {
            max = aux;
            leader = name;
        }
    }

    cout << leader << endl;

    return 0;
}