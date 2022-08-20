#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int B, S, aux, min;
    cin >> B;
    cin >> S;
    int counter = 1;

    while(B != 0 && S != 0) {
        vector<int> bachelor;
        vector<int> spinster;

        for(int i = 0; i < B; i++) {
            cin >> aux;
            bachelor.push_back(aux);
        }
        for(int i = 0; i < S; i++) {
            cin >> aux;
            spinster.push_back(aux);
        }

        if(B <= S) {
            cout << "Case " << counter << ": " << 0 << endl;
        }

        else {
            aux = B - S;
            min = *min_element(bachelor.begin(), bachelor.end());
            cout << "Case " << counter << ": " << aux << " " << min << endl;
        }

        cin >> B;
        cin >> S;
        counter ++;
    }

    return 0;
}