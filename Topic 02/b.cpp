#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N, B, H, W, aux;
    int pricePerPerson;
    bool fits;
    int finalPrice;

    while (cin >> N) {
        finalPrice = 500001;
        cin >> B;
        cin >> H;
        cin >> W;


        for (int i = 0; i < H; i++) {
            fits = false;
            vector<int> beds;
            cin >> pricePerPerson;
            for (int j = 0; j < W; j++) {
                cin >> aux;
                if (aux >= N){
                    fits = true;
                }
            }
            if(fits && N*pricePerPerson < finalPrice) {
                finalPrice = N*pricePerPerson;
            }
        }

        if (finalPrice > B) {
            cout << "stay home" << endl;
        }
        else {
            cout << finalPrice << endl;
        }

    }
    return 0;
}
