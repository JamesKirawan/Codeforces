#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name[]={"","Sheldon","Leonard","Penny","Rajesh","Howard"};
    int n;
    cin>>n;
    while (n > 5)
    {
        n=n/2-2;
    }
    cout<<name[n]<<endl;
}
