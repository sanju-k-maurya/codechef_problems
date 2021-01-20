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
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        int X,Y;
        if(x==y)
        {
            cout<<n<<" "<<n<<endl;
        }
        else if(x>y)
        {
            if(k%4==1)
            {
                X=n;
                Y = y+n-x;
                cout<<X<<" "<<Y<<endl;
            }
            else if(k%4==2)
            {
                Y=n;
                X = n-x+y;
                cout<<X<<" "<<Y<<endl;
            }
            else if(k%4==3)
            {
                X=0;
                Y=x-y;
                cout<<X<<" "<<Y<<endl;
            }
            else
            {
                Y=0;
                X=x-y;
                cout<<X<<" "<<Y<<endl;
            }
                
        }
        else
        {
            if(k%4==1)
            {
                Y=n;
                X = n-y+x;
                cout<<X<<" "<<Y<<endl;
            }
            else if(k%4==2)
            {
                X=n;
                Y = n-y+x;
                cout<<X<<" "<<Y<<endl;
            }
            else if(k%4==3)
            {
                Y=0;
                X=y-x;
                cout<<X<<" "<<Y<<endl;
            }
            else
            {
                X=0;
                Y=y-x;
                cout<<X<<" "<<Y<<endl;
            }
        }
        

    }
    return 0;
}    