#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int tiredness=0;
    int na=0,nb=0;
    bool flagA=true;
    bool flagB=false;
    while (true)
    {
       //cout<<a<<" "<<b<<endl;
        if (b >= a)
        {
            if (a == b) break;
            else if (flagA){
                a++;
                na++;
                flagA=false;
                flagB=true;
                tiredness+=na;
            }
            else if (flagB){
                b--;
                nb++;
                flagA=true;
                flagB=false;
                tiredness+=nb;
            }
        }
        else
        {
            if (a == b) break;
            else if (flagA){
                a--;
                na++;
                flagA=false;
                flagB=true;
                tiredness+=na;
            }
            else if (flagB){
                b++;
                nb++;
                flagA=true;
                flagB=false;
                tiredness+=nb;
            }
        }
    }
    cout<<tiredness<<endl;
}
