#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v1;
    vector <int> v2;
    string s;
    cin>>s;
    bool flag=false;
    for(int i = 0 ; i < s.size()-1 ; i++)
    {
        if (s[i] == 'A' && s[i+1] == 'B')
        {
            v1.push_back(i);
        }
        else if (s[i] == 'B' && s[i+1] == 'A')
        {
            v2.push_back(i);
        }
    }
    if (v1.size() == 0 && v2.size() == 0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        for(int i = 0 ; i < v1.size() ; i++)
        {
            for(int j = 0 ; j < v2.size() ; j++)
            {
                if (abs(v1[i] - v2[j]) >= 2)
                {
                    flag=true;
                }
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
