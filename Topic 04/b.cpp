#include <iostream>
#include <cstdio>
#include <set>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int front, rear, count;
    double max;
    double aux;

    while(1) {
        max = 0;
        cin >> front;
        if(front != 0) {
            cin >> rear;

            vector<double> fTeeth;
            vector<double> rTeeth;

            set<double> driveRatio;
            double d;

            for(int i = 0; i < front; i++) {
                cin >> aux;
                fTeeth.push_back(aux);
            }

            for(int i = 0; i < rear; i++) {
                cin >> aux;
                rTeeth.push_back(aux);
            }

            for(int i = 0; i < front; i++) {
                for(int j = 0; j < rear; j++) {
                    d = rTeeth[j] / fTeeth[i];
                    driveRatio.insert(d);
                }
            }
            
            set<double>::iterator it;
            set<double>::iterator it2;
            count = 0;
            for(it = driveRatio.begin(); it != driveRatio.end(); it++) {
                if(count != front*rear - 1) {
                    it2 = ++it;
                    it--;
                    if(*it2 / *it > max) {
                        max = *it2 / *it;
                    }
                    count++;
                }
            }

            printf("%.2f\n", max);
        }

        else {
            break;
        }
    }

    return 0;
}