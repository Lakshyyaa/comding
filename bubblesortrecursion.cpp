#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
// BUBBLE SORT BY RECURSION IS SIMILAR TO PRINTING THE PATTERN BELOW BY RECURSION
// to print: by recursion
//**** row 4
//*** row 3
//** row 2
//* row 1
//
// call fun(r,c) that prints until c is less than r start from (4,0)
void pattern1(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    else if (c == r)
    {
        cout << endl;
        pattern1(r - 1, 0);
    }
    else if (c < r)
    {
        cout << "*";
        pattern1(r, c + 1);
    }
}
void pattern2(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    else if (c == r)
    {
        pattern2(r - 1, 0);
        cout << endl;
    }
    else if (c < r)
    {
        pattern2(r, c + 1);
        cout << "*";
    }
}
void bubblesort(int r, int c, vector<int> &v)
{
    if (r == 0)
    {
        return;
    }
    else if (c == r)
    {
        bubblesort(r - 1, 0, v);
    }
    else if (c < r)
    {
        if (v[c + 1] < v[c])
        {
            swap(v[c], v[c + 1]);
        }
        bubblesort(r, c + 1, v);
    }
}
int main()
{
    int n = 4;
    // pattern1(n, 0);
    // pattern2(n, 0);
    vector<int>v={5,3,5,7,9,9,6,4,2,3,4,6,7,4,2};
    bubblesort(v.size(),0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}