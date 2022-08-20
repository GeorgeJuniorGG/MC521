#include <iostream>
#include <set>

using namespace std;

typedef pair<pair<int, int>, pair<int, int>> piiii;

int main(int argc, char const *argv[])
{
    int score, combinations, permutations;
    set<int> points;

    for (int i = 0; i < 21; i++)
    {
        points.insert(i);
        points.insert(2 * i);
        points.insert(3 * i);
    }

    points.insert(50);

    while (1)
    {
        cin >> score;

        if (score < 1)
        {
            cout << "END OF OUTPUT" << endl;
            break;
        }

        combinations = 0;
        permutations = 0;

        set<piiii> comb;

        set<int>::iterator it1, it2, it3;
        set<piiii>::iterator it4;
        bool found = false;

        for (it1 = points.begin(); it1 != points.end(); it1++)
        {
            for (it2 = points.begin(); it2 != points.end(); it2++)
            {
                for (it3 = points.begin(); it3 != points.end(); it3++)
                {
                    pair<int, int> p1;
                    pair<int, int> p2;
                    if (*it1 <= *it2 && *it1 <= *it3)
                    {
                        p1 = make_pair(*it1, min(*it2, *it3));
                        p2 = make_pair(max(*it2, *it3), 0);
                    }
                    else if (*it2 <= *it1 && *it2 <= *it3)
                    {
                        p1 = make_pair(*it2, min(*it1, *it3));
                        p2 = make_pair(max(*it1, *it3), 0);
                    }
                    else
                    {
                        p1 = make_pair(*it3, min(*it1, *it2));
                        p2 = make_pair(max(*it1, *it2), 0);
                    }

                    if ((p1.first + p1.second + p2.first) == score)
                    {
                        for (it4 = comb.begin(); it4 != comb.end(); it4++)
                        {
                            piiii aux = *it4;
                            if (aux.first.first == p1.first && aux.first.second == p1.second && aux.second.first == p2.first)
                            {
                                p2.second = aux.second.second + 1;
                                comb.erase(it4);
                                found = true;
                                break;
                            }
                        }
                        comb.insert(make_pair(p1, p2));
                    }
                    found = false;
                }
            }
        }
        for (it4 = comb.begin(); it4 != comb.end(); it4++)
        {
            piiii aux = *it4;
            permutations += (aux.second.second + 1);
        }

        if (comb.size() > 0)
        {
            cout << "NUMBER OF COMBINATIONS THAT SCORES " << score << " IS " << comb.size() << "." << endl;
            cout << "NUMBER OF PERMUTATIONS THAT SCORES " << score << " IS " << permutations << "." << endl;
        }
        else
        {
            cout << "THE SCORE OF " << score << " CANNOT BE MADE WITH THREE DARTS." << endl;
        }
        cout << "**********************************************************************" << endl;
    }

    return 0;
}