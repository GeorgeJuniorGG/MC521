#include <iostream>
#include <set>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux;
    cin >> n;

    bool exists = false;

    set<int> sizes;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        sizes.insert(aux);
    }

    set<int>::iterator it;
    set<int>::iterator it2;

    for(it = sizes.begin(); it != sizes.end(); it++) {
        it2 = it;
        it2++;
        it2++;

        if(*it2 - *it == 2) {
            exists = true;
            break;
        }
    }

    if (exists) {
        cout << "YES" << endl;
    }

    else { 
        cout << "NO" << endl;
    }

    return 0;
}