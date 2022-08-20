#include <iostream>
#include <set>

using namespace std;

set<int> found;

bool isRepresentable(int n) {
    if(found.find(n) != found.end()) {
        return true;
    }

    else if (n < 2020) {
        return false;
    }

    
    else if (n%2020 == 0|| n%2021 == 0) {
        found.insert(n);
        return true;
    }

    else if (n > 10000) {
        if (isRepresentable(n - (n)/4040 * 2020) || isRepresentable(n - (n)/4042 * 2021)) {
            found.insert(n);
            return true;
        }
        else {
            return false;
        }
    }

    else if (isRepresentable(n - 2020) || isRepresentable(n - 2021)) {
        found.insert(n);
        return true;
    }

    else { 
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;

    found.insert(2020);
    found.insert(2021);

    for (int i = 0; i < t; i++) {
        cin >> n;

        if(isRepresentable(n)) {
            cout << "YES" << endl;
        }

        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}