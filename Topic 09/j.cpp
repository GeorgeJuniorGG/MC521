#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    unsigned long long aux;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<unsigned long long> numbers;
        for (int j = 0; j < n; j++) {
            cin >> aux;
            numbers.push_back(aux);
        }
        sort(numbers.begin(), numbers.end());
        aux = numbers[n - 1] + numbers[n-2];
        cout << aux << endl;
    }

    return 0;
}