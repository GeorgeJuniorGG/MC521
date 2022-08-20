#include <iostream>

using namespace std;

int main()
{
    int matrix[5][5];

    int column;
    int line;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                column = j;
                line = i;
            }
        }
    }

    int solution = abs(2 - line) + abs(2 - column);

    cout << solution << endl;

    return 0;
}
