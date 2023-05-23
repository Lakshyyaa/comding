#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main(){
    vector<int> nums={2,3,1,1,4};
    int size=nums.size();
    int max=-1;
    for(int i=0;i<size;i++){
        max=nums[i];
    }
    return 0;
}