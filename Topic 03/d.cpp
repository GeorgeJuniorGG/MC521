#include <iostream>
#include <vector>

using namespace std;

int getHeight (vector<int> immM, vector<int>* heights, int height, int i) {

    if(heights->data()[i] != 0) {
        return heights->data()[i];
    }

    else {
        height = 1 + getHeight(immM, heights, height, immM[i]-1);
        heights->data()[i] = height;
    }

    return height;
}

int main(int argc, char const *argv[])
{
    int n, aux;
    int maxHeight = 0;

    cin >> n;

    vector<int> immM;
    vector<int> heights;

    for (int i = 0; i < n; i++) {
        cin >> aux;
        immM.push_back(aux);

        if(aux != -1) {
            heights.push_back(0);
        }
        else {
            heights.push_back(1);
        }
    }

    for (int i = 0; i < n; i++) {
        aux = getHeight(immM, &heights, 0, i);
        heights[i] = aux;

        if (aux > maxHeight) {
            maxHeight = aux;
        }

    }
    cout << maxHeight << endl;

    return 0;
}