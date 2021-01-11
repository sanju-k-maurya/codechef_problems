#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n], b[m];
        int sa=0, sb=0;
        for(int i=0;i<n;i++)
        {    
            cin>>a[i];
            sa+=a[i];
        }    
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
            sb+=b[j];
        }
        int min_swap=0;    
        sort(a,a+n);
        sort(b,b+m, greater<int>());
        if(sa>sb)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i<m)
                {   
                    sa = (sa-a[i])+b[i];
                    sb= (sb-b[i])+a[i];
                    min_swap++;
                    if(sa>sb)
                    {
                        cout<<min_swap<<endl;
                        break;
                    }
                }
            }        
        }
        if(sa<=sb)
            cout<<-1<<endl;

    }
    return 0;
}    