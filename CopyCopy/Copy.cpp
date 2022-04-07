#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        set <int> arr;
        arr.empty();
        int n,a;
        cin>>n;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a;
            arr.insert(a);
        }
        cout<<arr.size()<<endl;
    }

}
