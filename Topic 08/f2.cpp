#include <cstdio>
#include <cstring>
#include <cctype>
#include <vector>

using namespace std;

int min(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        return c;
    }
    if (b < c)
    {
        return b;
    }
    return c;
}

int main(int argc, char const *argv[])
{
    char msg[100001];
    scanf("%s", msg);
    int low, high, result, minTransition, aux, size;
    size = strlen(msg);
    vector<int> rightHigh;
    vector<int> leftLow;

    for (int i = 0; i < size; i++)
    {
        if (isupper(msg[i]))
        {
            high++;

            if (i < size - 1 && islower(msg[i + 1]))
            {
                leftLow.push_back(low);
                rightHigh.push_back(high);
            }
        }

        else if (islower(msg[i]))
        {
            low++;
        }
    }

    minTransition = size;

    for (int i = 0; i < rightHigh.size(); i++)
    {
        aux = leftLow[i] + high - rightHigh[i];
        if (aux < minTransition)
        {
            minTransition = aux;
        }
    }

    result = min(minTransition, size - low, size - high);

    printf("%d\n", result);

    return 0;
}