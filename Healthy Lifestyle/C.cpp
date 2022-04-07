#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> adj(100005);
vector <int> low, num, parent;
vector <bool> articulation;
vector < vector <int> > adjList;
int timer, dfsRoot, rootChildren;
set < pair<int, int> > sethcurry;
vector < pair<int, int> > vec;
vector <int> sizes;
void make_set(int v)
{
    parent[v] = v;
    sizes[v] = 1;
}

int find_set(int v)
{
    if(v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if(a != b)
    {
        if(sizes[a] < sizes[b])
            swap(a,b);
        parent[b] = a;
        if(sizes[a] == sizes[b])//Depth
            sizes[a]++;
        //sizes[a] += sizes[b] size
    }
}

void Bridge(int a)
{
    low[a] = num[a] = timer++;
    for(int i = 0; i < adjList[a].size(); i++)
    {
        int temp = adjList[a][i];
        if(num[temp] == 0)
        {
            parent[temp] = a;
            if(a == dfsRoot)
                rootChildren++;

            Bridge(temp);

            if(low[temp] >= num[a])
                articulation[a] = true;

            if(low[temp] > num[a])
            {
                sethcurry.insert(mp(a, temp));
                sethcurry.insert(mp(temp, a));
            }

            low[a] = min(low[a], low[temp]);

        }
        else if(temp != parent[a])
            low[a] = min(low[a], num[temp]);
    }
}
int main()
{
    fastio();

    // freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
    // g++ -std=c++11 Default.cpp  -o test
    // g++ -Wl,--stack=268435456 -std=c++11 Default.cpp  -o test

    cin >> many >> number >> query;

    num.resize(many);
    low.resize(many);
    articulation.resize(many);
    adjList.resize(many);
    parent.resize(many);
    sizes.resize(many);

    timer = 1;
    for(int i = 0; i < many; i++)
    {
        num[i] = 0;
        low[i] = 0;
        articulation[i] = 0;
        adjList[i].clear();
        parent[i] = -1;
    }

    while(number--)
    {
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        vec.pb(mp(a, b));
        adjList[a].pb(b);
        adjList[b].pb(a);
    }

    for(int i = 0; i < many; i++)
    {
        if(num[i] == 0)
        {
            dfsRoot = i;
            rootChildren = 0;
            Bridge(i);
            if(rootChildren > 1)
                articulation[dfsRoot] = true;
            else
                articulation[dfsRoot] = false;
        }
    }

    for(int i = 0; i < many; i++)
    {
        adjList[i].clear();
        make_set(i);
    }

    for(int i = 0; i < vec.size(); i++)
    {
        if(sethcurry.count(mp(vec[i].fi, vec[i].se)))
            continue;

        union_sets(vec[i].fi, vec[i].se);
    }

    while(query--)
    {
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        bool condition = true;
        if(find_set(a) != find_set(b))
            condition = false;

        if(condition)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }

    //
    return 0;
}
