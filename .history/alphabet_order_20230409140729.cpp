// also do prefix array question
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v;
    int n = 10;
    string s = "abcdefghijklmnopqrstuvwxyz";
    string word = "codeforces";
    int sum = 0;
    int x=0;
    int alphabet[26];
    for(int i=0;i<26;i++)
    {
        alphabet[s[x]-'a']=i;
        x++;
    }
    for(int i=0;i<n-1;i++)
    {
        sum=sum+abs(alphabet[word[i]-'a']-alphabet[word[i+1]-'a']);
    }
    cout<<sum;
    return 0;
}