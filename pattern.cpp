#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    // for (int i = 0; i < 4; i++)
    // {
    //     int x = 65;
    //     int c=0;
    //     for (int j = 0; j < 7; j++)
    //     {
    //         if (j < 4 - (i + 1))
    //         {
    //             cout << " ";
    //         }
    //         else if (j >= 4 - (i + 1) && j < 3)
    //         {
    //             char lol=x+c;
    //             cout << lol;
    //             c++;
    //         }
    //         else if (j == 3)
    //         {
    //             char lol=x+c;
    //             cout << lol;
    //         }
    //         else if (j > 3 && j < 4 + i)
    //         {
    //             c--;
    //             char lol=x+c;
    //             cout << lol;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    for (int i = 4; i >-1; i--)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j >= i + 1 && j < 9 - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j < i + 1)
            {
                cout << "*";
            }
            else if (j >= 9 - i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}