#include <iostream>

using namespace std;

int main() {
    int t, n, B, x, y, aux, aux2, prev;
    cin >> t;
    long long max;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> B;
        cin >> x;
        cin >> y;

        max = 0;
        prev = 0;
        for (int j = 0; j < n; j++) {
            aux = prev + x;
            aux2 = prev - y;

            if(aux > aux2) {
                if (aux <= B) {
                    max += aux;
                    prev = aux;
                }
                else {
                    max += aux2;
                    prev = aux2;
                }
            }
            else {
                if (aux2 <= B) {
                    max += aux2;
                    prev = aux2;
                }
                else {
                    max += aux;
                    prev = aux;
                }
            }
        }

        cout << max << endl;
    }

    return 0;
}