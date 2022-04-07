#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        vector <int> vec;
        for(int i = 0 ; i < n ; i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        int add = vec[0];
        int ans = 0;
        for(int i = 1 ; i < vec.size() ; i++)
        {
            if (vec[i] + add > k)
            {
                continue;
            }
            else
            {
                int bantu = k - vec[i];
                bantu/=add;
                ans+=bantu;
            }
        }
        cout<<ans<<endl;
    }
}
