#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    char letters[101];
    scanf("%s", letters);

    int QAQ = 0;

    if(strlen(letters) >= 3) {
        for(int i = 0; i < strlen(letters) - 2; i++) {
            if(letters[i] == 'Q') {
                for(int j = i + 1; j < strlen(letters) - 1; j++) {
                    if(letters[j] == 'A') {
                        for(int k = j + 1; k < strlen(letters); k++) {
                            if (letters[k] == 'Q') {
                                QAQ ++;
                            }
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", QAQ);
    
    return 0;
}