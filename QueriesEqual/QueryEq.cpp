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
    int n,m;
    cin>>n>>m;
    set <int , less_equal <int> > tes;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    //    tes.insert(x);
    }
   // for(auto i : tes)
    //{
      //  cout<<i<<" ";
   // }
    for(int i = 0 ; i < m ; i++)
    {
        int x;
        cin>>x;
        cout<<s.order_of_key(x+1)<<" ";
    }

}
