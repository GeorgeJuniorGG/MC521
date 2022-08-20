#include <iostream>
#include <queue>
#include <stack>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, type, x;
    bool fil, pil, pri;

    while (scanf("%d", &n) != EOF) {
        fil = true;
        pil = true;
        pri = true;


        queue<int> fila;
        stack<int> pilha;
        priority_queue<int> prioridade;

        for (int i = 0; i < n; i++) {
            cin >> type;
            cin >> x;

            if (type == 1) {
                fila.push(x);
                pilha.push(x);
                prioridade.push(x);
            }

            else {
                // FILA
                if(fila.empty() || fila.front() != x) {
                    fil = false;
                }
                else {
                    fila.pop();
                }

                // PILHA
                if(pilha.empty() || pilha.top() != x) {
                    pil = false;
                }
                else  {
                    pilha.pop();
                }

                // FILA DE PRIORIDADE
                if (prioridade.empty() || prioridade.top() != x) {
                    pri = false;
                }
                else {
                    prioridade.pop();
                }

            }
        }

        if (fil && !pil && !pri) {
            cout << "queue" << endl;
        }

        else if (!fil && pil && !pri) {
            cout << "stack" << endl;
        }

        else if (!fil && !pil && pri) {
            cout << "priority queue" << endl;
        }

        else if (!fil && !pil && !pri) {
            cout << "impossible" << endl;
        }

        else {
            cout << "not sure" << endl;
        }
    }

    return 0;
}