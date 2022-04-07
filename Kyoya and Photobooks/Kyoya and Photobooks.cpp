#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=s.size()+1;
    cout<<(ans*26)-s.size()<<endl;
}
