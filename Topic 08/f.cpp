#include <cstdio>
#include <cstring>
#include <cctype>
#include <iostream>

using namespace std;

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    char msg[100001];
    scanf("%s", msg);
    int low, high, result;

    for (int i = 0; i < strlen(msg); i++) {
        if(isupper(msg[i])) {
            high++;
        }
        else if (islower(msg[i])) {
            low++;
        }
    }

    if(isupper(msg[0])) {
        if(high == 1) {
            result = 0;
        }
        else if (islower(msg[1])) {
            if(islower(msg[strlen(msg) - 1]) && isupper(msg[strlen(msg) - 2])) {
                result = min(strlen(msg) - 1 - low, strlen(msg) - 2 - high);
            }
            else {
                result = min(strlen(msg) - 1 - low, strlen(msg) - high); 
            }
        }
        else {
            if(islower(msg[strlen(msg) - 1]) && isupper(msg[strlen(msg) - 2])) {
                result = min(strlen(msg) - 1 - low, strlen(msg) - 1 - high);
            }
            else {
                result = min(strlen(msg) - 1 - low, strlen(msg) - high); 
            }
        }
    }
    else {
        if(islower(msg[strlen(msg) - 1]) && isupper(msg[strlen(msg) - 2])) {
                result = min(strlen(msg) - low, strlen(msg) - 1 - high);
            }
            else {
                result = min(strlen(msg) - low, strlen(msg) - high); 
            }
    }

    

    cout << result << endl;

    return 0;
}