#include <cstdio>
#include <iostream>
#include <bitset>
#include <set>

using namespace std;

bool inGrid(char grid[6][6], char word[6]) {
    bitset<6> belongs (0);

    for (int i = 0; i < 5; i++) { // coluna
        for (int j = 0; j < 6; j++) {
            if (grid[j][i] == word[i]) {
                belongs.set(i, 1);
                break;
            }
        }
    }

    if (belongs.count() == 5) {
        return true;
    }

    return false;
}

int main(int argc, char const *argv[])
{
    int t, k;
    char gridA[6][6];
    char gridB[6][6];
    char word[6];
    word[5] = '\0';

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        set<string> passwords;

        scanf("%d", &k);
        for (int j = 0; j < 6; j++) {
            scanf("%s", gridA[j]);
        }
        for(int j = 0; j < 6; j++) {
            scanf("%s", gridB[j]);
        }

        for(int j = 0; j < 6; j++) {
            word[0] = gridA[j][0];
            for(int k = 0; k < 6; k++) {
                word[1] = gridA[k][1];
                for(int l = 0; l < 6; l++) {
                    word[2] = gridA[l][2];
                    for(int m = 0; m < 6; m++) {
                        word[3] = gridA[m][3];
                        for(int n = 0; n < 6; n++) {
                            word[4] = gridA[n][4];
                            if(inGrid(gridB, word)) {
                                passwords.insert(word);
                            }
                        }
                    }
                }
            }
        }

        if(passwords.size() < k) {
            cout << "NO" << endl;
        }

        else {
            set<string>::iterator it = passwords.begin();
            for(int j = 0 ; j < k - 1; j++) {
                it++;
            }
            cout << *it << endl;
        }
    }

    return 0;
}