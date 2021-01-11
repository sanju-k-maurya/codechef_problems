#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
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
        string es;
        cin>>es;
        string s = "";
        for(int i=0;i<n;i++)
        {
            if((i+1)%4==0)
            {
                string sbin = es.substr(i-3,4);
                int num_bin = stoi(sbin);
                int sn = binaryToDecimal(num_bin);
                char ch = (char)('a'+sn);
                s = s+ch;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
