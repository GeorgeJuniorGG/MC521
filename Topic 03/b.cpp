#include <iostream>
#include <deque>
#include <queue>
#include <set>

using namespace std;
typedef pair<int, int> pi;

int main(int argc, char const *argv[])
{
    deque<int> mono;
    priority_queue<pi> poli;
    set<int> removidos;
    set<int>::iterator it;
    bool repeat;

    int costumer = 1;
    int n, type, aux;
    pi paraux;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> type;

        if(type == 1) {
            cin >> aux;
            mono.push_back(costumer);
            poli.push(make_pair(aux, -costumer));
            costumer++;
        }

        else if(type == 2) {
            repeat = true;
            while (repeat) {
                repeat = false;
                aux = mono.front();
                mono.pop_front();
                it = removidos.find(aux);
                if(it != removidos.end()) {
                    repeat = true;
                }
            }

            removidos.insert(aux);
            cout << aux << " ";
        }

        else {
            repeat = true;
            while(repeat) {
                repeat = false;
                paraux = poli.top();
                poli.pop();
                aux = -paraux.second;
                it = removidos.find(aux);

                if(it != removidos.end()) {
                    repeat = true;
                }
            }

            removidos.insert(aux);
            cout << aux << " ";
        }

    }

    cout << endl;

    return 0;
}