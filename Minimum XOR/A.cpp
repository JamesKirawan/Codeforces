#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <int> s;
    unordered_map <int , int> mp;
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int capacity = 5;
    int pagef = 0;
    int a = 0;
    for (auto i : pages)
    {
        if (s.size() < capacity)
        {
            if (s.find(i) == s.end()) // tidak ada di dalam set
            {
                cout<<i<<endl;
                s.insert(i);
                pagef++;
            }
            mp[i] = a;
        }
        else
        {
            if (s.find(i) == s.end()) // tidak ada di dalam set
            {
                cout<<i<<endl;
                int mx = 9999999;
                int num ;
                for (auto it : s)
                {
                    if (mp[it] < mx)
                    {
                        mx = mp[it];
                        num = it;
                    }
                }
                s.erase(num);
                s.insert(i);
                pagef++;
            }
            mp[i] = a;
        }
        a++;
    }
    cout<<pagef<<endl;
}
