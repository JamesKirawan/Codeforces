#include <bits/stdc++.h>
using namespace std;
const int mxN = 100000005;
bool prime[mxN];
void sieve()
{
    prime[1] = false;
    prime[0] = false;
    for(int i = 2 ; i * i<= mxN ; i++)
    {
        if (prime[i])
        {
            for(int j = i * i ; j * j <= mxN ; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main()
{
    memset(prime,true,sizeof(prime));
    int n;
    cin>>n;
    sieve();
    int i = 1;
    while (true)
    {
        long long int x = n * i + 1;
        if (!prime[x])
        {
            cout<<i<<endl;
            return 0;
        }
        i++;
    }

}
