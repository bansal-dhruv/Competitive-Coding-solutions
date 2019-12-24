#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
 
int main()
{
    ios
    int t;
    cin>>t;
    while(t--){
        ll n,p,k,sum[200005],ans=0;
        cin>>n>>p>>k;
        vector<ll>v;
        for(ll i=0;i<n;i++){
                ll x;
                cin>>x;
                v.pb(x);
        }
        sort(v.begin(),v.end());
        sum[0]=v[0];
        for(ll i=1;i<n;i++)sum[i]=v[i]+sum[i-1];
 
        for(ll i=0;i<n;i++){
 
            if(i>=1 && i<=k)
                sum[i]=v[i]+sum[i-1];
 
            if(i<=k-2){
                if(sum[i]<=p){
                    ans=max(ans,i+1);
                }
                continue;
            }
 
            if(i>=2*k-1 && i-k>=0){
                v[i]+=v[i-k];
            }
 
            if(v[i]<=p){
                if( (i+1)%k-1 >=0 && p-v[i]>=sum[(i+1)%k - 1])
                    ans=i+1;
                else
                    ans=max(ans,((i+1)/k)*k);
            }else
                break;
        }
 
 
        v.clear();
        cout<<ans<<endl;
    }
 
    return 0;
}
