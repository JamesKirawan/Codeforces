#include <bits/stdc++.h>
using namespace std;
long long int qpow(long long int x , long long int y , long long int p)
{
    long long int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1) res = (res * x) % p;
        y/=2;
        x = (x * x) % p;
    }
    return res;
}
long long int modInverse(long long int x , long long int y)
{
    return qpow(x , y - 2 ,y);
}
void KMP(string X, string Y)
{
    int m = X.length();
    int n = Y.length();
    if (n == 0)
    {
        cout << "Pattern occurs with shift 0";
        return;
    }
    if (m < n)
    {
        cout << "Pattern not found";
        return;
    }
    int next[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        next[i] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        int j = next[i + 1];

        while (j > 0 && Y[j] != Y[i])
        {
            j = next[j];
        }

        if (j > 0 || Y[j] == Y[i])
        {
            next[i + 1] = j + 1;
        }
    }

    for (int i = 0, j = 0; i < m; i++)
    {
        if (X[i] == Y[j])
        {
            if (++j == n)
            {
                cout << "Pattern occurs with shift " << i - j + 1 << endl;
            }
        }
        else if (j > 0)
        {
            j = next[j];
            i--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    vector<int> vec;
    map <int,int> cek;
    map <int , int> mp;
    map <int , int> ans;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
        if (cek[arr[i]] == 0)
        {
            cek[arr[i]]=1;
            vec.push_back(arr[i]);
        }
        ans[arr[i]]=1;
        mp[arr[i]]++;
    }
    sort(vec.begin(),vec.end());
    for(int i = 0 ; i < vec.size() ; i++)
    {
        for(int j = i + 1 ; j < vec.size() ; j++)
        {
            ans[vec[i]]+=mp[vec[j]];
        }
    }
   /* for(auto i : vec)
    {
        cout<<i<<" ";
    }*/
    for(int i = 0 ; i < n ; i ++)
    {
        cout<<ans[arr[i]]<<" ";
    }
}
