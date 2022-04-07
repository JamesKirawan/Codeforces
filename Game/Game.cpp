#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> vec;
    for(int i = 0 ; i < n ; i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    for(int i = 0 ; i < n - 1 ; i++)
    {
        if (i % 2 == 0)
        {
            sort(vec.begin(),vec.end());
            auto it = vec.end();
            it--;
            vec.erase(it);
        }
        else
        {
            sort(vec.begin(),vec.end());
            auto it = vec.begin();
            vec.erase(it);
        }
    }
    cout<<vec[0]<<endl;


}
