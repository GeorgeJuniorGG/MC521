#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string initial, goal;
    bool possible;
    int n, counter;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> initial;
        cin >> goal;

        possible = false;
        counter = goal.length();
        vector<char> letters(counter);

        for (int j = 0; j < counter - 1; j++)
        {
            letters[j] = goal[j];
        }

        for (int j = initial.length() - 1; j >= 0; j--)
        {
            if (initial[j] == goal[counter - 1])
            {
                if (counter != goal.length())
                {
                    letters[counter - 1] = '0';
                }
                counter--;
            }

            else if (find(letters.begin(), letters.end(), initial[j]) != letters.end())
            {
                break;
            }

            if (counter == 0)
            {
                possible = true;
                break;
            }
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}