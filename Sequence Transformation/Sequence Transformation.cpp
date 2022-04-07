//Deksel Cemara
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n ;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];
        }
        vector <int> narr;
        narr.push_back(arr[0]);
        map <int , int> mp;
        for(int i = 1 ; i < n ; i++)
        {
            auto it = narr.end();
            it--;
            if (*it != arr[i])
            {
                narr.push_back(arr[i]);
            }
            mp[i]=1;
        }
        mp[n]=1;
        int ans = 1e9;
        for(int i = 0 ; i < narr.size() ; i++)
        {
            mp[narr[i]]++;
        }
        mp[narr[0]]--;
        mp[narr[narr.size()-1]]--;
        for(int i = 0 ; i < narr.size() ; i++)
        {
            ans = min(ans,mp[narr[i]]);
        }
        cout<<ans<<endl;
    }
}
