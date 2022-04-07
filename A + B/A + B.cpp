#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int sza,szb;
        sza = a.size();
        szb = b.size();
        int diff = abs(sza-szb);
        string c="";
        if (sza > szb)
        {
            for(int i = 0 ; i < diff ; i++)
            {
                c+='0';
            }
            c+=b;
        }
        else if (szb > sza)
        {
            for(int i = 0 ; i < diff ; i++)
            {
                c+='0';
            }
            string bantu = b;
            b = a;
            a = bantu;
            c+=b;
        }
        else
        {
            c+=b;
        }
      //  cout<<a<<" "<<c<<endl;
        int carry = 0;
        string ans ="";
        for(int i = c.size()-1 ; i >= 0 ; i--)
        {
            int aa = int(a[i] - '0');
            int bb = int(c[i] - '0');
            int value = aa + bb + carry;
           // cout<<value<<endl;
            if (value >= 10)
            {
                carry=1;
                value%=10;
                char add = value + '0';
                ans = add + ans;
            }
            else
            {
                carry = 0;
                char add = value + '0';
                ans = add + ans;
            }
        }
        if (carry == 1)
        {
            ans = '1' + ans;
        }
        cout<<ans<<endl;
    }
}
