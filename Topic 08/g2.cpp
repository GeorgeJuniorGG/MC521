#include <iostream>

using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, count, count2, streak1, ones1;
    cin >> n;
    cin >> m;

    int mat[n][m];
    int dp[n], dp2[m];
    int streak2[m], ones2[m];

    for (int i = 0; i < n; i++)
    {
        dp[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        dp2[i] = 0;
        streak2[i] = 0;
        ones2[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        ones1 = 0;
        streak1 = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                if (ones1 > 0)
                {
                    dp[i] += streak1;
                }

                dp[i] += streak1;
                streak1 = 0;
                ones1++;

                dp2[j] += streak2[j];

                if (ones2[j] > 0)
                {
                    dp2[j] += streak2[j];
                }
                streak2[j] = 0;
                ones2[j]++;
            }
            else if (mat[i][j] == 0)
            {
                streak1++;
                if (j == m - 1 && ones1 > 0)
                {
                    dp[i] += streak1;
                }

                streak2[j]++;
                if (i == n - 1 && ones2[j] > 0)
                {
                    dp2[j] += streak2[j];
                }
            }
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > 0)
        {
            count += dp[i];
        }
    }

    count2 = 0;
    for (int i = 0; i < m; i++)
    {
        if (dp2[i] > 0)
        {
            count2 += dp2[i];
        }
    }

    cout << count + count2 << endl;

    return 0;
}