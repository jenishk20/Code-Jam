#include<bits/stdc++.h>
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vii             vector<pair<int,int>>
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
    int  tor=1;
    while(u--)
    {
        int n;
        cin>>n;
        int temp=n;
        vii ve;
        int vea[n][2];
        int i=0,j=0,ca=0,ja=0;
        while(n--)
        {
            int s,e;
            cin>>s>>e;
            vea[i][0]=s;
            vea[i][1]=e;
            
            ve.pb(mp(vea[i][0],i));
            i++;
            
        }
        sort(ve.begin(),ve.end());
        // for(auto &it:ve)
        // cout<<it.first<<" "<<it.second<<endl;
        
        bool boo=false;
        vi a;
        vi b;
        for(i=0;i<temp;i++)
        {
            if(ve[i].first>=ca)
            {
                a.pb(ve[i].second);
                ca=vea[ve[i].second][1];
            }
            else
             {
                 if(ve[i].first>=ja)
                 {
                     b.pb(ve[i].second);
                     ja=vea[ve[i].second][1];
                 }
                 else
                 {
                     boo=true;
                     break;
                 }
             }
            
        }
        // for(auto &it:a)
        // cout<<it<<" ";
        // cout<<endl;
        // for(auto &it:b)
        // cout<<it<<" ";
        
       char ch[temp];
        for(auto &it:a)
        ch[it]='C';
        for(auto &it:b)
        ch[it]='J';
        ch[temp]='\0';
        if(boo)
        {
            printf("Case #%d: ",tor);
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
             printf("Case #%d: ",tor);
             cout<<ch<<endl;
        }
        tor++;
    }
}