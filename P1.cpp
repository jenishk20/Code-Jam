#include<bits/stdc++.h>
#define lli long long int 
using namespace std;
int main()
{
    int t;
    int temp=1;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli a[n][n];
        lli i,j;
        lli r=0,c=0;
        unordered_set<lli>s;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                s.insert(a[i][j]);
            }
            if(s.size()!=n)
            r++;
            s.clear();
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                s.insert(a[j][i]);
            }
            if(s.size()!=n)
            c++;
            s.clear();
            
        }
        lli sum=0;
        for(i=0;i<n;i++)
        sum+=a[i][i];
        printf("Case #%d: ",temp);
        cout<<sum<<" "<<r<<" "<<c<<endl;
        temp++;
    }
}