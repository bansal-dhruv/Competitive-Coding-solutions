#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back
ll mod=1000000007;
ll dp[100002];
 
int main()
{	
	ios
	ll n;
	cin>>n;
	ll a[n+1];
	ll dpl[n+10],dpr[n+10];
	ll zero=0,neg=0,pos=0;
	ll sum=0;
 
	for(ll i=0;i<n;i++){
		cin>>a[i];
		
		if(a[i]==0)
			zero++;
		else if(a[i]<0)
			neg++;
		else
			pos++;
 
		sum+=abs(a[i]);
		dpl[i]=sum;
	}
 
	if(n==1){
		cout<<a[0];
		return 0;
	}else if(n==2){
		cout<<max(a[0]-a[1],a[1]-a[0]);
		return 0;
	}
 
	sum=0;
	for(ll i=n-1;i>=0;i--){		
		sum+=abs(a[i]);
		dpr[i]=sum;
	}
 
	ll maxi=-9999999999;
	if(pos==n){
		for(int i=0;i<n-1;i++){
			ll temp = (i-1>=0 ? dpl[i-1] : 0) + (i+2<n ? dpr[i+2] : 0) + abs(a[i]-a[i+1]);
			maxi=max(maxi , temp);
		}
		cout<<maxi;		
	}else if(neg==n){
		for(int i=0;i<n-1;i++){
			ll temp = (i-1>=0 ? dpl[i-1] : 0) + (i+2<n ? dpr[i+2] : 0) + abs(a[i]-a[i+1]);
			maxi=max(maxi , temp);
		}
		cout<<maxi;
	}else{
		cout<<dpl[n-1];
	}	
 
	// cout<<maxi<<endl;
 
	return 0;
}	
