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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int oddc=0;
        int evenc=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                evenc++;
            }
            else
            {
                oddc++;
            }
        }
        if(oddc%2==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }

    }
    return 0;
}    