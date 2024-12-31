#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        cin>>s;

        int f=0,x=0,y=0;

        for(int i=0;i<20*n;i++)
        {
            int k=i;
            k%=n;
            if(x==a&&y==b)
            {
                f=1;
                break;
            }
            if(s[k]=='N') y++;
            else if(s[k]=='E') x++;
            else if(s[k]=='S') y--;
            else x--;

        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
