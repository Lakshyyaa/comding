// also do prefix array question
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    int a=n,
    string s = "abcdefghijklmnopqrstuvwxyz";
    string word = "hello";
    int sum=0;
    int index1=0;
    int index2=0;
    while(n>0)
    {
        for(int i=0;i<26;i++)
        {
            if(s[i]==word[n-i-1])
            {
                if(n==5)
                {
                    index1=i;
                    index2=i;
                }
            }
        }
        n--;
    }
    return 0;
}