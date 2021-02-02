#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t=5;
    //cin>>t;
    while(t--)
    {
        int a[3]={0};
        int sum=0;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            
        }
        for(int i=0;i<3;i++)
            sum=sum+a[i];
        bool istrue = false;
        for(int i=0;i<3;i++)
        {
            if(a[i]==(sum-a[i]))
            {
                istrue = true;
                break;
            }

        }
        //cout<<sum<<endl;
        if(istrue)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}    