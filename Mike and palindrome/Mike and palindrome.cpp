#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    int j=s.size()-1;
    for(int i = 0 ; i < s.size() ; i ++)
    {
        if (i == j || i > j) break;
        if (s[i] == s[j])
        {
            j--;
            continue;
        }
        else
        {
            if (cnt > 1) break;
            else cnt++,j--;
        }
    }
    if(cnt == 1 || (cnt == 0 && s.size() % 2 == 1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
