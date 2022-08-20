#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, l, k, aux;
    cin >> n;
    cin >> l;
    cin >> k;

    long long int time;
    long long int min;

    vector<int> signs;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        signs.push_back(aux);
    }

    vector<int> speeds;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        speeds.push_back(aux);
    }

    vector<int> currentSigns;
    for (int i = 0; i < n; i++)
    {
        currentSigns.push_back(0);
    }
    currentSigns[0] = 1;

    vector<int> lastSigns;
    for (int i = 0; i < n; i++)
    {
        lastSigns.push_back(l);
    }

    vector<int> lastSpeeds;
    for (int i = 0; i < n; i++)
    {
        lastSpeeds.push_back(speeds[0]);
    }

    time = l * speeds[0];

    for (int j = 1; j < n; j++)
    {
        min = 10000 * l;

        for (int i = 1; i < n; i++)
        {
            if (currentSigns[i] == 1)
            {
                continue;
            }
            if ((lastSigns[i] - signs[i]) * (speeds[i] - lastSpeeds[i]) < min)
            {
                min = (lastSigns[i] - signs[i]) * (speeds[i] - lastSpeeds[i]);
                aux = i;
            }
        }

        if (min > 0 && j >= n - k)
        {
            break;
        }

        for (int i = aux + 1; i < n; i++)
        {
            if (currentSigns[i] == 0)
            {
                lastSpeeds[i] = speeds[aux];
            }
            else
            {
                break;
            }
        }

        for (int i = aux - 1; i > 0; i--)
        {
            if (currentSigns[i] == 0)
            {
                lastSigns[i] = signs[aux];
            }
            else
            {
                break;
            }
        }

        time += min;
        currentSigns[aux] = 1;
    }

    cout << time << endl;

    return 0;
}