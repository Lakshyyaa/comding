#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    // Since all dictinct in range 0,n
    // brute used O(n*n) or hashing
    // optimal uses sum as sum of n is n*(n+1)/2
    // optimal may also use xor which is better than sum as sum
    // may use long ling to store the n*n+1/2 while xor uses max n
    // xor of n and n is 0, xor of 0 and n is n
    // first check question if zero is there in the array as the xor solution may change
    // xor1 stores all 0^1^2.. if 0 present, else without 0 to n+1
    // xor2 stores all present in the array
    // xor1^xor2 gives the number not present as all the same ones will give out 0
    vector<int> v = {1, 2, 4, 0};
    int xor1 = 0;
    int xor2 = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ (i + 1);
        xor2 = xor2 ^ (v[i]);
    }
    int y = xor2^xor1;
    cout<<y;
    return 0;
}