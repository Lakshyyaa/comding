#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
int main()
{
    vector<int> nums = {;

    // brute: n^3 way and use a set to store unique arrays, in the end store the set in the answer vector



    // better: n^2 hashing, as shown below
    // for hashing we take sums of two and try to look for the element which is equal to -sum as we need the
    // net sum to be 0. take sum of pairs and put all elements between these pair elements in the hashmap to
    // avoid duplication
    // set<vector<int>> st;
    // for(int i=0;i<nums.size();i++){
    //     set<int>hash;
    //     for(int j=i+1;j<nums.size();j++){
    //         int k = -1 * (nums[i] + nums[j]);
    //         if(hash.find(k)!=hash.end()){
    //             vector<int>ok={nums[i],nums[j], k};
    //             sort(ok.begin(), ok.end()); 
    //             st.insert(ok);
    //         }
    //         hash.insert(nums[j]);
    //     }
    // }



    // optimal: 2 pointers
    vector<vector<int>>v;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if (nums[i] == nums[i - 1] && i>0)
        {
            continue;;
        }
        int a=i+1;
        int b=nums.size()-1;
        while(a<b){
            int sum=nums[i]+nums[a]+nums[b];
            if(sum<0){
                a++;
            }
            else if (sum>0){
                b--;
            }
            else{
                vector<int>lol={nums[i],nums[a],nums[b]};
                cout<<nums[i]<<" "<<nums[a]<<" "<<nums[b]<<endl;
                v.push_back(lol);
                a++;
                b--;
                while( a<b && nums[a]==nums[a-1]){
                    a++;
                }
                while (a<b && nums[b] == nums[b + 1])
                {
                    b--;
                }
            }
        }
    } 
    return 0;
}
