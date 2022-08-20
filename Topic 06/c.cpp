#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int size, i;
    int numbers[3];

    cin >> size;
    cin >> numbers[0];
    cin >> numbers[1];
    cin >> numbers[2];

    sort(numbers, numbers + 3);

    int submax = 0;
    int maxmax = 0;

    if (size%numbers[0] == 0) {
        maxmax = size / numbers[0];
        submax = maxmax;
    }

    for (int j = size/numbers[0]; j >= 0; j--) {
        if ((size - j*numbers[0]) % numbers[1] == 0) {
            submax = j + (size - j*numbers[0])/numbers[1];
            if (submax > maxmax) maxmax = submax;
        }

        for (int k = (size-j*numbers[0])/numbers[1]; k >= 0; k--) {
            if ((size - j*numbers[0] - k*numbers[1]) % numbers[2] == 0) {
                i = (size - j*numbers[0] - k*numbers[1])/numbers[2];
                if (j*numbers[0] + k*numbers[1] + i*numbers[2] == size) {
                    submax = j + k + i;
                    if (submax > maxmax) maxmax = submax;
                }
            }
        }
    }

    cout << maxmax << endl;

    return 0;
}