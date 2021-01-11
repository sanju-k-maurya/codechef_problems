#include <bits/stdc++.h>
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
        ll n,k,d;
        cin>>n>>k>>d;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll total =0;
        for(ll i=0;i<n;i++)
            total+=a[i];
        
        if(total/k>d)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<total/k<<endl;
        }
        
        

        
    }
    return 0;
}