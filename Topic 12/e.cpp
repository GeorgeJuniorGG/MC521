#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux;
    cin >> n;

    bool triangle = false;

    vector<int> likes;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        likes.push_back(aux - 1);
    }

    for (int i = 0; i < n; i++)
    {
        if (likes[likes[likes[i]]] == i)
        {
            triangle = true;
        }
    }

    if (triangle)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}