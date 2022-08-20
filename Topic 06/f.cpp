#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int atual, anterior;
    int contagem = 0;
    int maxContagem = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            anterior = atual;
            cin >> atual;
            if (atual >= anterior) {
                contagem ++;
            }
            else {
                contagem = 1;
            }
        }

        else {
            contagem++;
            cin >> atual;
        }

        if(contagem > maxContagem) maxContagem = contagem;
    }

    cout << maxContagem << endl;

    return 0;
}