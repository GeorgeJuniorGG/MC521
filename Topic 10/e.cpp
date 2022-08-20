#include <iostream>

using namespace std;

// FALTOU CONTAR OS COMPONENTES FORTEMENTE CONEXOS

int main(int argc, char const *argv[])
{
    int t, n, m, dom, vic, count;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        count = 0;

        cin >> n;
        cin >> m;

        int dominos[n];
        int visited[n];

        for (int j = 0; j < n; j++)
        {
            visited[j] = 0;
            dominos[j] = -1;
        }

        for (int j = 0; j < m; j++)
        {
            cin >> dom;
            cin >> vic;
            dominos[dom - 1] = vic - 1;
        }

        for (int j = 0; j < n; j++)
        {
            if (visited[j] != 0)
            {
                continue;
            }

            dom = j;
            while (visited[dom] == 0)
            {
                if (dom == -1)
                {
                    break;
                }

                visited[dom] = 1;
                dom = dominos[dom];
            }
            count++;
        }

        cout << count << endl;
    }

    return 0;
}