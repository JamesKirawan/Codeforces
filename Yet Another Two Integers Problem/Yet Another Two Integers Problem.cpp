#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
    tree_order_statistics_node_update> ordered_set;
ordered_set s;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int ans=ceil((abs(a-b))/10.0);
        /*if (abs(a-b) % 10 != 0)
        {
            ans=(abs(a-b))/10+1;
        }
        else
        {
            ans=(abs(a-b))/10;
        }*/
        cout<<ans<<endl;
    }

}
