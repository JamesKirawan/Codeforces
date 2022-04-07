#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    int asc[n+5];
    int desc[n+5];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
        asc[i]=desc[i]=a[i];
    }
    sort(asc,asc+n);
    sort(desc,desc + n , greater <int>());
    unordered_map <int , int> path;
    unordered_map <int , int> cnt;
    for(int i = 0 ; i < n ; i++)
    {
        path[asc[i]] = desc[i];
        cnt[abs(desc[i]-asc[i])]++;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if (cnt[path[a[i]] - a[i]] > 0)
        {
            cnt[path[a[i] - a[i]]]--;
            cout<<path[a[i]]<<" ";
        }
        else
        {
            cout<<a[i]<<" ";
        }
    }

}
