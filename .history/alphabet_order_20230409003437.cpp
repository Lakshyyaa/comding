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
    int alphabet[26];
    for(int i=0;i<26;i++)
    {
        
    }
    for(int i=0;i<n-1;i++)
    {
        sum=sum+abs(word[i]-word[i+1]);
    }
    cout<<sum;
    return 0;
}