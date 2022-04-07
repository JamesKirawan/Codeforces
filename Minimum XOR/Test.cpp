#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[] = {0,1,2,2,4,5,6};
    map <int , int> mp;
    set <int> st;
    int cap = 4;
    int pf = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if (st.size() < cap)
        {
            if (st.find(arr[i]) == st.end())
            {
                st.insert(arr[i]);
                pf++;
            }
            mp[arr[i]] = i;
        }
        else
        {
            if (st.find(arr[i]) == st.end())
            {
                int num = 0;
                int mx = 10000000;
                for (auto j : st)
                {
                    if (mp[j] < mx)
                    {
                        mx = mp[j];
                        num = j;
                    }
                }
                st.erase(num);
                st.insert(arr[i]);
                pf++;
            }
            mp[arr[i]] = i;
        }
    }
    for(auto i : st)
    {
        cout<<i<<endl;
    }
    cout<<pf<<endl;
}
