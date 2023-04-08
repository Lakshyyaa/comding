// also do prefix array question
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 7;
    string s = "qwertyuiopasdfghjklzxcvbnm";
    string word = "abacaba";
    int sum = 0;
    int x=0;
    int alphabet[26];
    for(int i=0;i<26;i++)
    {
        alphabet[s[x]-'a']=i;
        cout<<s[x]-'a'<<" ";
        x++;
    }
    // for(int i=0;i<26;i++)
    // {
    //     cout<<alphabet[i]<<" ";
    // }
    for(int i=0;i<n-1;i++)
    {
        sum=sum+abs(alphabet[word[i]-'a']-alphabet[word[i+1]]);
        // cout<<sum<<' ';
    }
    cout<<sum;
    return 0;
}