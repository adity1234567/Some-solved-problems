#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<pair<pair<int,int>,int>>v;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back(make_pair(make_pair(a,b),c));
    }

    sort(v.begin(),v.end());

    for(auto x:v)
    {
        cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;
    }
}
