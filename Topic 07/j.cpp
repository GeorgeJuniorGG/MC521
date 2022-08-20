#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, count, pos;
    cin >> t;

    bool achou;
    char modelo[501];
    char objetivo[1000];

    for (int i = 0; i < t; i ++) {
        achou = false;
        vector<int> poss;
        vector<int> counts;

        scanf("%s", modelo);
        scanf("%s", objetivo);

        for (int j = 0; j < strlen(modelo); j++) {
            count = 0;
            if(modelo[j] == objetivo[0]) {
                count ++;
                if(count == strlen(objetivo)) {
                    achou = true;
                }
                else {
                    poss.push_back(j);
                    counts.push_back(count);
                    for (int k = j + 1; k < strlen(modelo); k++) {
                        if (modelo[k - 1] == objetivo[count + 1]) {
                            poss.push_back(k-1);
                            counts.push_back(count);
                        }
                        if (modelo[k] == objetivo[count]) {
                            count++;
                            poss.push_back(k);
                            counts.push_back(count);
                            if(count == strlen(objetivo)) {
                                achou = true;
                                break;
                            }
                        }
                        else {
                            break;
                        }

                    }
                    for(pos = 0; pos < poss.size(); pos++) {
                        count = counts[pos];
                        if (achou) {
                            break;
                        }
                        for (int k = poss[pos] - 1; k >= 0; k--) {
                            if (modelo[k] == objetivo[count]) {
                                count++;
                                if(count == strlen(objetivo)) {
                                    achou = true;
                                    break;
                                }
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
            }

            if (achou) {
                cout << "YES" << endl;
                break;
            }
        }

        if (achou == false) {
            cout << "NO" << endl;
        }
    }


    return 0;
}