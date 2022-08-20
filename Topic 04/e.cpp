#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, total, subtotal;
    scanf("%d", &n);

    bool possible = false;
    int occurences[10] = {0,0,0,0,0,0,0,0,0,0};
    char aux;
    int size = 0;

    while (cin >> aux) {
        occurences[(int) aux - 48]++;
        size++;
    }

    if (size >= 11 && occurences[8] > 0) {
        possible = true;
    }

    if(possible) {
        int eights = occurences[8];

        if((size - eights)/10 >= eights) {
            total = eights;
        }
        else {
            subtotal = (size)/10;
            if(subtotal <= eights && subtotal == (size-subtotal)/10) {
                total = subtotal;
            }
            else {
                total = subtotal - 1;
            }
        }

        cout << total << endl;
    }

    else {
        cout << 0 << endl;
    }

    return 0;
}