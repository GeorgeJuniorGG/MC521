#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, aux, cream;
    cin >> t;

    for (int i = 0; i < t; i ++) {
        vector<int> creams;
        vector<int> solution;
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> aux;
            creams.push_back(aux);
        }

        cream = 0;
        for (int j = n - 1; j >= 0; j--) {
            aux = creams[j] - cream;
            if (aux > 0) {
                cream += aux;
            }
            
            if (cream > 0) {
                solution.push_back(1);
                cream --;
            }
            else {
                solution.push_back(0);
            }
        }
        
        for (int j = n - 1; j >= 0; j--) {
            cout << solution[j] << " ";
        }
        cout << endl;
    }

    return 0;
}