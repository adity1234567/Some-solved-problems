#include<bits/stdc++.h>
using namespace std;


bool compare(pair<int,int>&a,pair<int,int>&b)
{
   if(a.first==b.first) return a.second<b.second;

   return a.second>b.second;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        int a,b;
        while(n--)
        {
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),compare);

        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}
