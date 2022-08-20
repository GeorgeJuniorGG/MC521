#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, count, rest, streak;
    cin >> t;
    char aux;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<char> brackets;

        count = 0;
        rest = 0;
        streak = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            brackets.push_back(aux);
        }

        for (int j = 0; j < n; j++)
        {
            if (brackets[j] == '(')
            {
                if (j < n - 1)
                {
                    count++;
                    j++;
                }
                else
                {
                    rest++;
                }
            }
            else if (brackets[j] == ')')
            {
                if (j < n - 1)
                {
                    streak++;
                    while (brackets[j + streak] != ')')
                    {
                        streak++;
                        if (j + streak == n)
                        {
                            rest += streak;
                            count--;
                            break;
                        }
                    }
                    j += streak;
                    count++;
                    streak = 0;
                }
                else
                {
                    rest++;
                }
            }
        }
        cout << count << " " << rest << endl;
    }

    return 0;
}