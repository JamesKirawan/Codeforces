#include <bits/stdc++.h>
using namespace std;
const long long int mxN = 1000;
vector <long long int> angka;
bool flag[50000];
void sieve()
{
    for(long long int i = 2 ; i * i <= mxN ; i++)
    {
        if (flag[i])
        {
            //cout<<"TES"<<endl;
            angka.push_back(i);
            for(long long int j = i * i  ; j <= mxN ; j+=i)
            {
                flag[j]=false;
               // cout<<"TES"<<endl;
            }
        }
    }
}
int main()
{
    memset(flag,true,sizeof(flag));
    sieve();
}
