#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int d, n;
    cin >> n;
    cin >> d;

    char aux;

    int counter = 0;
    bool possible = true;
    bool first = true;

    vector<char> lillies;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        lillies.push_back(aux);

        if (aux == '1') {
            if (first) {
                counter = 0;
                first = false;
            }
            else {
                if (counter > d) {
                    possible = false;
                }
                counter = 0;
            }
        }
        counter ++;
    }

    if (!possible) {
        cout << -1 << endl;
    }

    else {
        counter = 0;
        for (int i = 0; i < n; i++) {
            if (i == n-1) {
                break;
            }
            if (lillies[i] == '1') {
                for (int j = d; j >= 1; j--) {
                    if (i + j >= n) {
                        continue;
                    }
                    if(lillies[i+j] == '1') {
                        counter ++;
                        i += j - 1;
                        break;
                    }
                }
            }
        }

        cout << counter << endl;
    }

    return 0;
}