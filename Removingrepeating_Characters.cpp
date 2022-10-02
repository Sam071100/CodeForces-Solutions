#include <iostream>
#include <string>
#define ll long long int
using namespace std;
int main()
{
    string s;
    cin >>s;
    ll count=0, length;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            if (s[i]==s[j] && i != j)
            {
                count++;
                break;
            }
            
        }
    }
    length=s.length()-count;
    if (length % 2==1)
    {
        cout <<"IGNORE HIM!\n";
    }
    else
    {
        cout <<"CHAT WITH HER!\n";
    }
    return 0;
}
