#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <unordered_map>
using namespace std;
// IF ALL POSITIVE:
// Brute: check all elements if they form the subarray
// Better: use a hashmap to store prefix sum of all with their index
// Optimal: two pointers to store first and last element
int brute(vector<int> v, int sum)
{
    int x = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int sumx = 0;
        for (int j = i; j < v.size(); j++)
        {
            sumx += v[j];
            if (sumx == sum)
            {
                x = max(x, j - i + 1);
            }
        }
    }
    return x;
}
// hashmap stores the prefix sum for element at i
// using this, let's say for map[i]=x and for j<i map[j]=x-k
// then for elements from j to i have sum x-x+k=k
// this code wont handle negatives or zeroes as the hashmap will update values of previous ones
// because the same sumx might come up again if 0 encountered
// so only update hashmap if empty by adding the line extra.
int better(vector<int> v, int sum)
{
    int x = 0;
    unordered_map<int, int> m;
    int sumx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sumx += v[i];
        if (sumx == sum)
        {
            x = i;
        }
        if (m.find(sumx - sum) != m.end())
        {
            int j = m[sumx - sum];
            x = max(x, i - j);
        }
        // updating by checking
        if (m.find(sumx) == m.end())
        {
            m[sumx] = i;
        }
        //
    }
    return x;
}
// We already know this cant count properly if 0, -ve present
int optimal(vector<int> v, int sum)
{
    int i = -1;
    int j = -1;
    int sumx = 0;
    int x = 0;
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
            x = max(x, i - j);
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
            x = max(x, i - j);
        }
    }
    return x;
}
int main()
{
    vector<int> v = {1, 2, 3, -2, -3, 0, 0, 3, 1, 2, -3};
    int sum = 3;
    cout << brute(v, sum) << endl;
    cout << better(v, sum) << endl;
    cout << optimal(v, sum);
    return 0;
}