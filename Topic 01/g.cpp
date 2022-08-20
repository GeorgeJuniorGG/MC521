#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char sum[101];

    cin >> sum;

    double size = strlen(sum);

    int ones = 0;
    int twos = 0;
    int threes = 0;

    for (int i = 0; i < ceil(size/2); i++) {
        if (sum[2 * i] == '1') {
            ones ++;
        }
        else if (sum[2 * i] == '2') {
            twos ++;
        }
        else if (sum[2 * i] == '3') {
            threes ++;
        }
    }

    int empty = 1;

    for (int i = 0; i < ones; i++) {
        if( i == 0) {
            cout << "1";
        }
        else {
            cout << "+1";
        }
        empty = 0;
    }

    for (int i = 0; i < twos; i++) {
        if (empty == 1) {
            cout << "2";
        }
        else {
            cout << "+2";
        }
        empty = 0;
    }

    for (int i = 0; i < threes; i++) {
        if (empty == 1) {
            cout << "3";
        }
        else {
            cout << "+3";
        }
        empty = 0;
    }

    cout << endl;

    return 0;
}
