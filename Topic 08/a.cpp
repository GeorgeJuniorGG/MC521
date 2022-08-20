#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, result;
    cin >> n;

    if (n % 2 == 1) {
        result = 0;
    }
    
    else {
        result = pow(2, n/2);
    }

    cout << result << endl;;

    return 0;
}