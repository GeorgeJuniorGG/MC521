#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int nums, aux;

    for (int i = 0; i < n; i++) {
        vector<int> order;
        vector<int> repetidos;
        vector<int> output;

        cin >> nums;

        for(int j = 0; j < nums; j++) {
            cin >> aux;
            order.push_back(aux);
        }

        sort(order.begin(), order.end());

        for(int j = 0; j < nums - 1; j++) {
            if (order[j] == order[j + 1]) {
                repetidos.push_back(order[j]);
            }
            else {
                cout << order[j] << " ";
            }
        }

        cout << order[nums-1] << " ";

        for (int j = 0; j < repetidos.size(); j++) {
            cout << repetidos[j] << " ";
        }

        cout << endl;

    }


    return 0;
}