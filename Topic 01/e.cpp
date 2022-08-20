#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    
    cin >> n;

    int array[100];

    int i = 0;

    while (i < n) {
        cin >> array[i];
        i++;
    }

    int solution;

    int first = array[0] % 2;
    int second = array[1] % 2;
    int third = array[2] % 2;

    int evenness;

    if (first == second || first == third) {
        evenness = first;
    }

    else {
        evenness = second;
    }

    for (int j = 0; j < i; j++) {
        if (array[j] %2 != evenness) {
            solution = j + 1;
        }
    }

    cout << solution << endl;

    return 0;
}
