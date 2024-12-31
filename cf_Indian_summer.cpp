//forgot everything

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    string s1,s2;
    cin>>t;
    int k=0;
    while(t--)
    {
        cin>>s1>>s2;
        set<pair<string,string>>st;
        k=0;
        st.insert({s1,s2});
        k=st.size();
    }
    cout<<k;
}
