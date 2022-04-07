#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define lli long long int
#define mxN 10005
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
tree_order_statistics_node_update> os;
typedef pair<lli,int> pii;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int x;
    if (n % 2)
    {
        x=n/2+1;
    }
    else
    {
        x=n/2;
    }
    while (x % m != 0) x++;
    cout<<(n >= m ? x : -1)<<endl;

}
