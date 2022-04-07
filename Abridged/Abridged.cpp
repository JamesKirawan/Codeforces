#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair <int,int> a[n*2];
    int b,c;
    for(int i = 0 ; i < n * 2 ; i++)
    {
        cin>>b>>c;
        a[i]=make_pair(b,c);
    }
    for(int i = 0 ; i < n * 2 ; i++)
    {
        cout<<a[i].first<<a[i].second<<endl;1
    }
}
