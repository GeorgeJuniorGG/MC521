#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, count;
    cin >> n;
    cin >> m;

    int mat[n][m];
    int dp[n], dp2[m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if(mat[i][j] == 1) {
                dp[i] = 1;
                dp2[j] = 1;
            }
        }
    }

    count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(mat[i][j] == 0) {
                if (dp2[j] == 1) {
                    for (int k = 0; k < i; k++) {
                        if(mat[k][j] == 1) {
                            count ++;
                            break;
                        }
                    }
                    for (int k = i + 1; k < n; k++) {
                        if(mat[k][j] == 1) {
                            count ++;
                            break;
                        }
                    }
                }
                if (dp[i] == 1) {
                    for(int k = 0; k < j; k++) {
                        if(mat[i][k] == 1) {
                            count ++;
                            break;
                        }
                    }
                    for (int k = j+1; k < m; k++) {
                        if (mat[i][k] == 1) {
                            count ++;
                            break;
                        }
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}