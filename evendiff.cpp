#include <bits/stdc++.h>
#include<string>
#include<cstdlib>
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int odd=0;
        int even =0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                even++;
            else
            {
                odd++;
            }
            
        }
        if(even==0 || odd == 0)
            cout<<0<<endl;
        else
        {
            cout<<min(odd,even)<<endl;
        }
        
    }
    return 0;
}    