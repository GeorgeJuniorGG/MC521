#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, shelves, length, counter;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> shelves;
        cin >> length;
        
        if(length == 1) {
            cout << "YES" << endl;
            for(int j = 0; j < shelves; j++) {
                cout << j+1 << endl;
            }
        }

        else {
            if (shelves%2 == 1) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
                for (int j = 1; j <= shelves; j++) {
                    for (int k = 0; k < length; k++) {
                        cout << j + k * shelves << " ";
                    }
                    cout << endl;
                }
            }
        }
    }

    return 0;
}