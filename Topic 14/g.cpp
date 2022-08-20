#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, oneA, oneB, twoA, twoB, threeA, threeB, fourA, fourB, fiveA, fiveB, count, aux;
    cin >> n;

    oneA = 0;
    oneB = 0;
    twoA = 0;
    twoB = 0;
    threeA = 0;
    threeB = 0;
    fourA = 0;
    fourB = 0;
    fiveA = 0;
    fiveB = 0;
    count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        if (aux == 1)
        {
            oneA++;
        }
        else if (aux == 2)
        {
            twoA++;
        }
        else if (aux == 3)
        {
            threeA++;
        }
        else if (aux == 4)
        {
            fourA++;
        }
        else if (aux == 5)
        {
            fiveA++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        if (aux == 1)
        {
            oneB++;
        }
        else if (aux == 2)
        {
            twoB++;
        }
        else if (aux == 3)
        {
            threeB++;
        }
        else if (aux == 4)
        {
            fourB++;
        }
        else if (aux == 5)
        {
            fiveB++;
        }
    }

    if (!(abs(oneA - oneB) % 2) && !(abs(twoA - twoB) % 2) && !(abs(threeA - threeB) % 2) && !(abs(fourA - fourB) % 2) && !(abs(fiveA - fiveB) % 2))
    {
        count += abs(oneA - oneB) / 2 + abs(twoA - twoB) / 2 + abs(threeA - threeB) / 2 + abs(fourA - fourB) / 2 + abs(fiveA - fiveB) / 2;
        count = count / 2;
    }
    else
    {
        count--;
    }

    cout << count << endl;

    return 0;
}