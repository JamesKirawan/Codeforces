#include <bits/stdc++.h>
using namespace std;
string convert(long long int x)
{
    stringstream ss;
    ss << x;
    return ss.str();
}
int main()
{
    int n;
    cin>>n;
    int a=0;
    bool flag=false;
    string cek;
    for (int i = n+1 ; ; i++)
    {
        cek=convert(i);
        a++;
        for(int j = 0 ; j < cek.size() ; j++)
        {
            if (!flag)
            {
                if (cek[j] == '8')
                {
                    flag=true;
                }
            }
            else
            {
                break;
            }
        }
        if (flag) break;
    }
    cout<<a<<endl;
}
