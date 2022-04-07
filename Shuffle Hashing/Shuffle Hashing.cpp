#include <bits/stdc++.h>
using namespace std;
void sortstring(string &str)
{
    sort(str.begin(),str.end());
}
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        string s1,s2;
        cin>>s1;
        sortstring(s1);
        cin>>s2;
        bool flag=false;
        for(int i = 0 ; i < s2.size() ; i++)
        {
            string buff;
            if (flag) break;
            else{
                for(int j = i ; j < i+s1.size() ; j++)
                {
                    buff+=s2[j];
                }
                sortstring(buff);
                //cout<<"INI "<<buff<<endl;
                if (s1 == buff) flag=true;
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


}
