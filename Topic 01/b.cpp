#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char A[101];
    char B[101];

    cin >> A;
    cin >> B;

    for (int i = 0; i < strlen(A); i++) {
        A[i] = tolower(A[i]);
    }

    for (int i = 0; i < strlen(B); i++) {
        B[i] = tolower(B[i]);
    }

    if (lexicographical_compare(A, A + strlen(A), B, B + strlen(B))) {
        cout << -1 << endl;
    }

    else if (lexicographical_compare(B, B + strlen(B), A, A + strlen(A))) {
        cout << 1 << endl;
    }

    else {
        cout << 0 << endl;
    }

    return 0;
}
