#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <unordered_map>
using namespace std;
// IF ALL POSITIVE:
// Brute: check all elements if they form the subarray
// Better: use a hashmap to store prefix sum of all
// Optimal: two pointers to store first and last element
int brute(vector<int> v, int sum)
{
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {   
        int sumx = 0;
        for (int j = i; j < v.size(); j++)
        {
            sumx += v[j];
            if (sumx == sum)
            {
                if (max < j - i + 1)
                {
                    max = j - i + 1;
                }
            }
        }
    }
    return max;
}
// hashmap stores the prefix sum for element at i
// using this, let's say for map[i]=x and for j<i map[j]=x-k
// then for elements from j to i have sum x-x+k=k
// this code wont handle negatives or zeroes as the hashmap will update values of previous ones
// because the same sumx might come up again if 0 encountered
// so only update hashmap if empty by adding the line extra.
int better(vector<int> v, int sum)
{
    int max = 0;
    unordered_map<int, int> m;
    int sumx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sumx += v[i];
        if (sumx == sum)
        {
            max = i + 1;
            }
        if (m.find(sumx - sum) != m.end())
        {
            int j = m[sumx - sum];
            if (max < i - j)
            {
                max = i - j;
            }
        }
        // updating by checking
        if (m.find(sumx) == m.end())
        {
            m[sumx] = i;
        }
        //
    }
    return max;
}
int optimal(vector<int> v, int sum)
{
    int max = 0;
    int i = 0;
    int j = 0;
    int sumx = 0;
    while (i < v.size() + 1)
    {
        if (sumx < sum)
        {
            if (i < v.size())
            {
                sumx += v[i];
                i++;
            }
        }
        else if (sumx > sum)
        {
            sumx -= v[j];
            j++;
        }
        else
        {
            if (max < i - j)
            {
                max = i - j;
            }
            sumx += v[i];
            i++;
        }
    }
    return max;
}
int main()
{
    vector<int> v = {1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, -2, 0, 1, 1, -1, -1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3};
    int sum = 3;
    // cout << brute(v, sum) << endl;
    cout << better(v, sum) << endl;
    cout << optimal(v, sum);
    return 0;
}