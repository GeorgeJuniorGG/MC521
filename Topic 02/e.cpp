#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int K, N, M, X, Y;

    cin >> K;
    while (K != 0) {

        cin >> N;
        cin >> M;

        for (int i = 0; i < K; i++) {
            cin >> X;
            cin >> Y;

            if (X == N || Y == M) {
                cout << "divisa" << endl;
            }

            else if (X < N && Y < M) {
                cout << "SO" << endl;
            }

            else if (X < N && Y > M) {
                cout << "NO" << endl;
            }

            else if (X > N && Y < M) {
                cout << "SE" << endl;
            }

            else if (X > N && Y > M) {
                cout << "NE" << endl;
            }
        }

        cin >> K;
    }

    return 0;
}