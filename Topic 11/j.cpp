#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;

    cin >> n;
    cin >> k;

    string slogan;
    cin >> slogan;

    int pos = k;
    int printed = 0;

    if (n - k >= k) {
        for (int i = 0; i < k; i++) {
            cout << "PRINT " << slogan[pos-1] << endl;
            printed++;
            if(i != k - 1) {
                cout << "LEFT" << endl;
            }
            pos --;
        }
        for(int i = 0; i <= k; i++) {
            if(i != k && printed != n) {
                cout << "RIGHT" << endl;
            }
            if(printed > 0) {
                pos++;
            }
        }
        
        for (int i = 0; i < n-k; i++) {
            cout << "PRINT " << slogan[pos-1] << endl;
            if(i != n-k-1) {
                cout << "RIGHT" << endl;
            }
            pos++;
        }
    }
    else {
        for (int i = 0; i <= n-k; i++) {
            cout << "PRINT " << slogan[pos-1] << endl;
            printed++;
            if(i != n-k) {
                cout << "RIGHT" << endl;
            }
            pos++;
        }
        for (int i = 0; i <= n-k+1; i++) {
            if(i != n-k+1 && printed != n) {
                cout << "LEFT" << endl;
            }
            if(printed > 0) {
                pos--;
            }
        }

        for (int i = 0; i < k-1; i++) {
            cout << "PRINT " << slogan[pos-1] << endl;
            if(i != k-2) {
                cout << "LEFT" << endl;
            }
            pos--;
        }
    }

    return 0;
}