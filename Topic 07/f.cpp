#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, count, gotit;
    cin >> t;

    for (int i = 0; i < t; i++) {
        gotit = 0;
        cin >> n;
        char digits[n];
        scanf("%s", digits);

        if (n == 4 && !strcmp("2020\0", digits)) {
            gotit = 1;
        }

        else {

            for(int j = 0; j < n; j++) {
                for(int k = j; k < n; k++) {
                    count = 0;
                    char aux[n];
                    if(n - (k - j + 1) != 4) {
                        continue;
                    }
                    for (int z = 0; z <= n; z++) {
                        if (z < j || z > k) {
                            aux[count] = digits[z];
                            count++;
                        }
                    }
                    if(!strcmp("2020\0", aux)) {
                        gotit = 1;
                        break;
                    }
                }
                if(gotit == 1) {
                    break;
                }
            }
        }

        if (gotit == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}