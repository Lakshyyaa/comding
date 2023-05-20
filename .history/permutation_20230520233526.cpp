#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
//13254
//150743
//11269 10 3
{
    vector<int>nums={5};
    int x=0;
    for(int i=nums.size()-1;i>0;i--){
        if(nums[i]>nums[i-1]){           
            swap(nums[i],nums[i-1]);
            x = i;
            break;
        }
        else if (nums[i - 1] < nums[nums.size() - 1])
        {
            if (nums[i - 1] < nums[nums.size() - 1])
            {
                swap(nums[i - 1], nums[nums.size() - 1]);
                x = i;
                break;
            }
        }
    }
    reverse(nums.begin() + x, nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
