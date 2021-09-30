#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    vector<bool>prime(n+1, true);

    for (int p = 2; p * p <= n; p++)
    {
        if(prime[p] == true)
        {
            for (int i = p*p; i <= n; i+=p)
            {
                prime[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout <<i<<" ";
        }
    }
    cout <<endl;
}

int main()
{
    SieveOfEratosthenes(121);
    return 0;
}
