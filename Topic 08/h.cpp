#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char month[10];
    int mon, aux;
    scanf("%s", month);

    for(int i = 0; i < 12; i++) {
        if (!strcmp(month, months[i])) {
            mon = i;
        }
    }

    cin >> aux;
    aux = (mon + aux) % 12;

    printf("%s\n", months[aux]);

    return 0;
}