#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    vector<int>nums={-1,0,1,2,-1,-4};
    //-4 -1 -1 0 1 2
    int sum=0;
    sort(nums.begin(),nums.end());
   
            }
            else if (sum < nums[i] + nums[a] + nums[b]){
                b--;
            }
            else{
                if (i != a && a != b && b != i){
                    cout << nums[i] << " " << nums[a] << " " << nums[b] << endl;
                }
                a++;
                b--;
            }
        }
    }
    return 0;
}