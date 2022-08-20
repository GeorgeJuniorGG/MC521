#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, aux, count, streak;
    cin >> n;    
    vector<int> profits;

    streak = 0;
    count = 1;

    for(int i = 0; i < n; i++) {
        cin >> aux;
        profits.push_back(aux);
        if(aux < 0) {
            streak++;
        }
        if(streak == 3) {
            count ++;
            streak = 1;
        }
    }

    cout << count << endl;

    count = 0;
    streak = 0;
    for (int i = 0; i < n; i++) {
        if(profits[i] < 0) {
            streak++;
        }
        if(streak == 3) {
            streak = 1;
            cout << count << " ";
            count = 0;
        }
        count++;
    }
    cout << count << endl;

    return 0;
}