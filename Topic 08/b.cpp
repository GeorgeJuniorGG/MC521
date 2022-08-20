#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, ones, negativeOnes, zeroes;;
    long long unsigned int aux;
    cin >> n;
    vector<int> differences;

    ones = 0;
    negativeOnes = 0;
    zeroes = 0;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        differences.push_back(aux - 1);
    }

    aux = 0;

    for (int i = 0; i < n; i++) {
        if (differences[i] == -1) {
            aux += 1;
            zeroes ++;
        }
        else if (differences[i] < -1) {
            negativeOnes ++;
            aux += abs(differences[i]) - 2;
        }
        else {
            ones++;
            aux += abs(differences[i]);
        }
    }

    if(negativeOnes % 2 == 1 && zeroes == 0) {
        aux += 2;
    }

    cout << aux << endl;

    return 0;
}