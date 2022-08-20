#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux;
    bool jolly;

    while (cin >> n) {
        jolly = true;

        vector<int> numbers;
        vector<int> differences;

        for (int i = 0; i < n; i++) {
            cin >> aux;
            numbers.push_back(aux);
        }

        if (n == 1) {
            cout << "Jolly" << endl;
        }

        else {
            for (int i = 0; i < n - 1; i++) {
                differences.push_back(abs(numbers[i + 1] - numbers[i]));
            }
            

            sort(differences.begin(), differences.end());

            for (int i = 0; i < n - 1; i++) {
                if (differences[i] == differences[i + 1]) {
                    cout << "Not jolly" << endl;
                    jolly = false;
                    break;
                }

            }

            if (jolly) {
                if (differences[0] == 1 && differences[n - 2] == n-1) {
                    cout << "Jolly" << endl;
                }
                else {
                    jolly = false;
                    cout << "Not jolly" << endl;
                }
            }
        }
    }

    return 0;
}