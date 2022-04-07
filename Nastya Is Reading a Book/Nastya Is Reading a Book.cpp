#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back(b);
    }
    int k;
    cin>>k;
    int diff=0;
    for(auto i : vec)
    {
        if (i < k)
        {
           diff++;
        }
    }
    cout<<n-diff<<endl;
}
