#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        map <int , int> mp;
        map <int , int> idx;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
            if (idx[arr[i]] > 0)
            {
                continue;
            }
            else
            {
                idx[arr[i]] = i+1;
            }
        }
        bool flag = false;
        sort(arr,arr+n);
        for(int i = 0 ; i < n ; i++)
        {
            if (mp[arr[i]] == 1)
            {
                cout<<idx[arr[i]]<<endl;
                flag = true;
                break;
            }
        }
        if (!flag) cout<<-1<<endl;
    }
}
