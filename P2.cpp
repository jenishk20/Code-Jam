#include<bits/stdc++.h>
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18

using namespace std;
int32_t main()
{
    int u;
    cin>>u;
    int  y=1;
    while(u--)
    {
        string store;
        cin>>store;
        int  l=store.length();
        int  i=0;
        string restore;
       
        while(store[i]=='0' && i<=l){
        restore+=store[i];
        i++;}
        if(i==l)
        {
            printf("Case #%d: ",y);
            cout<<restore<<endl;
            y++;
            continue;
        }
        
        
        int t1=store[i]-'0';
        
        while(t1--)
        restore+='(';
        restore+=store[i];
        
        int  j;
        for(j=i+1;j<l;j++)
        {
            int t2=store[j]-'0';
            int t3=store[j-1]-'0';
            if(t2>t3)
            {
                int  re=t2-t3;
                while(re--)
                restore+='(';
                restore+=store[j];
            }
            else if(t2<t3)
            {
                int re=t3-t2;
                while(re--)
                restore+=')';
                restore+=store[j];
            }
            else
            restore+=store[j];
        }
        
        
        int  t4=store[j-1]-'0';
        while(t4--)
        restore+=')';
        printf("Case #%d: ",y);
        cout<<restore<<endl;
        
        y++;
    }
}