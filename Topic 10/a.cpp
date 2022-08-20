#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux;
    cin >> n;

    vector<int> students;
    vector<int> visited;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        students.push_back(aux - 1);
        visited.push_back(0);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[j] = 0;
        }

        aux = i;
        while (visited[aux] == 0)
        {
            visited[aux] = 1;
            aux = students[aux];
        }
        cout << aux + 1 << " ";
    }
    cout << endl;

    return 0;
}