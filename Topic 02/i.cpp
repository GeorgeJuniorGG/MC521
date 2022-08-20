#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, M, aux, counter;
    cin >> N;
    cin >> M;

    while (N != 0 || M != 0) {
        vector<int> Jack;
        vector<int> Jill;
        vector<int> intersection(10000000);
        vector<int>::iterator it;

        counter = 0;

        for (int i = 0; i < N; i++) {
            cin >> aux;
            Jack.push_back(aux);
        }

        for (int j = 0; j < M; j++) {
            cin >> aux;
            Jill.push_back(aux);
        }

        it = set_intersection(Jack.begin(), Jack.end(), Jill.begin(), Jill.end(), intersection.begin());

        intersection.resize(it-intersection.begin());

        for (it = intersection.begin(); it != intersection.end(); it++) {
            counter++;
        }

        cout << counter << endl;

        cin >> N;
        cin >> M;
    }

    return 0;
}