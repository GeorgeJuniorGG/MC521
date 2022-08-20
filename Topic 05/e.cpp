#include <iostream>
#include <vector>

using namespace std;

bool palindrome (vector<char> Nstring, int length, int start, int end) {
    if (length == 1) {
        return false;
    }

    else if(length == 2) {
        if(Nstring[start] == Nstring[end]) {
            return true;
        }
        return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int t, n;
    char aux;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<char> Nstring;

        for (int j = 0; j < n; j++) {
            cin >> aux;
            Nstring.push_back(aux);
        }

        if (palindrome(Nstring, n, 0, n-1)) {
            cout << "NO" << endl;
        }

        else { 
            cout << "YES" << endl;
        }

    }

    return 0;
}