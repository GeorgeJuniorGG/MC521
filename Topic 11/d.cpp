#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    char aux;
    int aux2;
    cin >> aux;
    cin >> aux2;
    pair<int,int> s;
    if(aux == 'a') {
        s.first = 1;
    }
    else if(aux == 'b') {
        s.first = 2;
    }
    else if(aux == 'c') {
        s.first = 3;
    }
    else if (aux == 'd') {
        s.first = 4;
    }
    else if (aux == 'e') {
        s.first = 5;
    }
    else if (aux == 'f') {
        s.first = 6;
    }
    else if (aux == 'g') {
        s.first = 7;
    }
    else if (aux == 'h') {
        s.first = 8;
    }
    s.second = aux2;
    cin >> aux;
    cin >> aux2;
    pair<int,int> t;
    if(aux == 'a') {
        t.first = 1;
    }
    else if(aux == 'b') {
        t.first = 2;
    }
    else if(aux == 'c') {
        t.first = 3;
    }
    else if (aux == 'd') {
        t.first = 4;
    }
    else if (aux == 'e') {
        t.first = 5;
    }
    else if (aux == 'f') {
        t.first = 6;
    }
    else if (aux == 'g') {
        t.first = 7;
    }
    else if (aux == 'h') {
        t.first = 8;
    }
    t.second = aux2;

    int horizontal = s.first - t.first;
    int vertical = s.second - t.second;

    int saida = max(abs(vertical), abs(horizontal));
    cout << saida << endl;

    while(horizontal != 0 || vertical != 0) {
        if(horizontal > 0 && vertical > 0) {
            cout << "LD" << endl;
            horizontal --;
            vertical --;
        }
        else if(horizontal > 0 && vertical < 0) {
            cout << "LU" << endl;
            horizontal --;
            vertical ++;
        }
        else if(horizontal < 0 && vertical > 0) {
            cout << "RD" << endl;
            horizontal ++;
            vertical --;
        }
        else if(horizontal < 0 && vertical < 0) {
            cout << "RU" << endl;
            horizontal ++;
            vertical ++;
        }
        else if (vertical > 0) {
            cout << "D" << endl;
            vertical --;
        }
        else if (vertical < 0) {
            cout << "U" << endl;
            vertical ++;
        }
        else if (horizontal> 0) {
            cout << "L" << endl;
            horizontal --;
        }
        else if (horizontal < 0) {
            cout << "R" << endl;
            horizontal ++;
        }
    }

    return 0;
}