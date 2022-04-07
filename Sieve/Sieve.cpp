#include <bits/stdc++.h>
using namespace std;
bool isPrime[100000005];
void Sieve(int n)
{
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0]=false;
    isPrime[1]=false;
    for (int i = 2 ; i * i <= n ; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i ; j <= n ; j+=i)
            {
                //cout<<j<<"Check"<<endl;
                isPrime[j]=false;
            }
        }
    }
}
int main()
{
    int tc;
    cin>>tc;
    Sieve(100000005);
    while(tc--)
    {
        int a;
        cin>>a;
        if(isPrime[a]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
