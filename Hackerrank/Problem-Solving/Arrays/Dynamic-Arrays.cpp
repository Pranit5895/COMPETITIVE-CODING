#include <bits/stdc++.h>

using namespace std;

vector<int> v[100005];

int main()
{
    int n, q, type, x, y;
    cin>>n>>q;
    assert(n >= 1 && n <= 100000 && q >= 1 && q <= 100000);
    int lastans = 0;
    while(q--)
    {
        cin>>type>>x>>y;
        assert(type >= 1 && type <= 2 && x >= 0 && x <= 1000000000 && y >= 0 && y <= 1000000000);
        if(type == 1)
        {
            v[(lastans^x)%n].push_back(y);
        }
        else
        {
            int pos = (lastans^x)%n;
            int idx = y%((int)v[pos].size());
            lastans = v[pos][idx];
            cout<<lastans<<endl;
        }
    }
    return 0;
}
