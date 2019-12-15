#include<bits/stdc++.h>
using namespace std;
#define ll int
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
ll n,a[200005],dp[200005],vis[200005];
std::vector<ll> v[200005];
 
 
int main()
{
    ios
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=n;
        vis[i]=0;
        if(i-a[i]>=0)
        	v[i-a[i]].pb(i);
        if(i+a[i]<n)
        	v[i+a[i]].pb(i);
    }
    vector<ll> v1,v2;
    v1.clear();
    v2.clear();
    for(int i=0;i<n;i++){
    	if(i-a[i]>=0 && a[i]%2!=a[i-a[i]]%2){
    	    dp[i]=1;
    	    v1.pb(i);
    	}else if(i+a[i]<n && a[i]%2!=a[i+a[i]]%2){
        	dp[i]=1;
        	v1.pb(i);
    	}
    }
 
    int cnt=2;
    while( !v1.empty() ){
    	for(int j : v1){
    		//cout<<j<<" "<<a[j]<<endl;
    		for(int k : v[j]){
    			if(dp[k]>cnt){
    				dp[k]=cnt;
    				v2.pb(k);
    			}
    		}
    	}
 
    	v1=v2;
    	v2.clear();
 
    	cnt++;
    }
 
    for(int i=0;i<n;i++){
        if(dp[i]>=n)
            cout<<"-1 ";
        else cout<<dp[i]<<" ";
    }
 
    return 0;
}
