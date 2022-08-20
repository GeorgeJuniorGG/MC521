#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, k, aux, size;
    cin >> t;
    bool achou;

    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> k;
        size = 0;
        achou = false;
        vector<int> elements;

        for (int j = 0; j < n; j++) {
            cin >> aux;
            elements.push_back(aux);
            size++;
        }

        vector<int> auxElements;

        for (int j = 0; j < n; j++) {
            auxElements.push_back(elements[j] - k);
        }

        sort(elements.begin(), elements.end());

        for(int j = 0; j < n; j++) {
            if(binary_search(elements.begin(), elements.end(), auxElements[j])) {
                achou = true;
                break;
            }
        }

        if (achou) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
    }

    return 0;
}