#include <iostream>
#include <string>

using namespace std;

int maxxx(int a, int b, int c, int d) {
    if (a > b || c != d - 1) {
        return a;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    int k, a, b, size, extra, aux, aux2;
    string msg;

    cin >> k;
    cin >> a;
    cin >> b;
    cin >> msg;

    bool possible = true;

    if(msg.length() < k * a ||  msg.length() > k * b) {
        possible = false;
    }

    if(!possible) {
        cout << "No solution" << endl;
    }
    else {
        size = msg.length();
        extra = size - a*k;
        aux2 = extra/k;
        for(int i = 0; i < k; i++) {
            aux = a + maxxx(aux2, extra, i, k);
            extra -= maxxx(aux2, extra, i, k);
            cout << msg.substr(msg.length() - size, aux) <<  endl;
            size -= aux;
        }
    }

    return 0;
}