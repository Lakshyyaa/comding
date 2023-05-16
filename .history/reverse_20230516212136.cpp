#include <iostream>
#include <vector>
using namespace std;
int main()
{
    char s[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for (int i = 0; i < sizeof(s) / 2; i++)
    {
        swap(s[i], s[sizeof(s) - 1]);
    }
    for (int i = 0; i < sizeof(s); i++)
    {
        cout<<s[i]<<' ';
    }
    return 0;
}
