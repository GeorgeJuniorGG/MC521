#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, number, start;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> number;

        if(number%7 == 0) {
            cout << number << endl;
            continue;
        }

        start = number - number%10;
        for(int j = 0; j < 10; j++) {
            if((start + j) % 7 == 0) {
                cout << start + j << endl;
                break;
            }
        }
    }

    return 0;
}