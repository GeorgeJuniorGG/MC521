#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    cin >> n;
    cin >> t;

    string queue;
    cin >> queue;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < queue.size(); j++) {
            if(queue[j] == 'B' && queue[j+1] == 'G') {
                queue[j] = 'G';
                queue[j+1] = 'B';
                j ++;
            }
        }
    }
    cout << queue << endl;

    return 0;
}