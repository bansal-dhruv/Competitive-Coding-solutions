#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back
ll mod=1000000007;
 
vector< pair<ll,ll> > v;
 
int main()
{	
	ios
	ll n;
	cin>>n;
	ll dpl[n+5],dpr[n+5],l[n+5],r[n+5],x[n+5],h[n+5];
 
	for(int i=0;i<n;i++){
		ll xx,yx;
		cin>>xx>>yx;
		v.push_back({xx,yx});
		dpl[i]=0;
		dpr[i]=0;
	}sort(v.begin(), v.end());
	
	if(n==1){
		cout<<"1";
		return 0;
	}
 
	for(int i=0;i<n;i++){
		x[i]=v[i].first;
		h[i]=v[i].second;
		l[i]=x[i];
		r[i]=x[i];
	}
	
	dpl[0]=1;
	l[0]=x[0]-h[0];
	if(x[0]+h[0]<x[1]){
		dpr[0]=1;
		r[0]=x[0]+h[0];
	}
 
	for(int i=1;i<n-1;i++){
		if(x[i-1] < x[i]-h[i] ){
			dpl[i]=dpl[i-1]+1;
			l[i]=h[i];
			if(x[i-1]+r[i-1] < x[i]-h[i])
				dpl[i]=max(dpl[i],dpr[i-1]+1);
		}else{
			l[i]=0;
			dpl[i]=max(dpl[i-1],dpr[i-1]);
		}
 
		if(x[i]+h[i] < x[i+1]){
			dpr[i]=max(dpr[i-1],dpl[i-1]) + 1;
			r[i]=h[i];
		}else{
			r[i]=0;
			dpr[i]=max(dpr[i-1],dpl[i-1]);
		}
	}	
 
	cout<<max(dpr[n-2],dpl[n-2])+1;
 
	return 0;
}	
