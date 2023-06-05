#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <unordered_map>
using namespace std;
// IF ALL POSITIVE:
// Brute: check all elements if they form the subarray(+,0,-) O(n*n) time O(1) space
// Better: use a hashmap to store prefix sum of all with their count O(n) and O(n)
// Optimal: two pointers to store first and last element
int brute(vector<int> v, int sum)
{
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int sumx = 0;
        for (int j = i; j < v.size(); j++)
        {
            sumx += v[j];
            if (sumx == sum)
            {
                count++;
            }
        }
    }
    return count;
}
// hashmap stores the prefix sum for element at i
// using this, let's say for map[i]=x and for j<i map[j]=x-k
// just like finding the longest subarray, but in that the problem is,
// let's say we found 7 somewhere and to need sum 3 we need 4 behind 7
// and we have 4,4,4 before it, so it only uses one 4 instead not using the
// 4s to count all subarrays
// so this map stores the number of arrays that have the sum
int better(vector<int> v, int sum)
{
    unordered_map<int, int> m;
    int sumx = 0;
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sumx += v[i];
        if (sumx == sum)
        {
            count++;
        }
        if (m.find(sumx - sum) != m.end())
        {
            count += m[sumx - sum];
        }
        m[sumx]++;
    }
    return count;
}
// works only for + (no 0, no -)
// the reason is: like in the example {1,2,3,0,0,3,0} for sum=3
// we wont be able to add {0,3,0} and {0,3} as the moment we get the sum, we move 'i' ahead
// and not check for subarrays in the subarray we have(by moving 'j')
int optimal(vector<int> v, int sum)
{
    int i = -1;
    int j = -1;
    int sumx = 0;
    int count = 0;
    while (i + 1 < v.size() + 1)
    {
        if (sumx < sum)
        {
            i++;
            sumx += v[i];
        }
        else if (sumx > sum)
        {
            j++;
            sumx -= v[j];
        }
        else
        {
            count++;
            i++;
            if (i < v.size())
            {
                sumx += v[i];
            }
        }
    }
    while (j < v.size())
    {
        j++;
        sumx -= v[j];
        if (sumx == sum)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> v = {1, 2, 3, 0, 0, 3, 0};
    int sum = 3;
    cout << brute(v, sum) << endl;
    cout << better(v, sum) << endl;
    cout << optimal(v, sum);
    return 0;
}