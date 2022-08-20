#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned long long turns, hc, dc, hm, dm, k, w, a, roundsc, roundsm, newDc, newHc;
    cin >> turns;
    bool win = false;

    for (int i = 0; i < turns; i++)
    {
        win = false;

        cin >> hc;
        cin >> dc;
        cin >> hm;
        cin >> dm;
        cin >> k;
        cin >> w;
        cin >> a;

        roundsc = hc / dm;
        if (hc % dm > 0)
        {
            roundsc++;
        }

        roundsm = hm / dc;
        if (hm % dc > 0)
        {
            roundsm++;
        }

        if (roundsc >= roundsm)
        {
            win = true;
        }

        else
        {
            for (int j = 0; j <= k; j++)
            {
                newDc = dc + (k - j) * w;
                newHc = hc + j * a;

                roundsc = newHc / dm;
                if (newHc % dm > 0)
                {
                    roundsc++;
                }

                roundsm = hm / newDc;
                if (hm % newDc > 0)
                {
                    roundsm++;
                }

                if (roundsc >= roundsm)
                {
                    win = true;
                    break;
                }
            }
        }

        if (win)
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