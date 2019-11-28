// ll fact[MAXN+2],inv[MAXN+2];
// ll pw(ll a , ll b){
//     if(!b)
//         return 1;
//     if(b % 2)
//         return (a * pw(a , b - 1)) % mod;
//     return pw((a * a) % mod , b / 2)%mod;
// }
// void factt(){
// 	fact[0] = 1;
// 	for (ll i = 1 ; i <= MAXN ; i ++)
// 		fact[i] = (fact[i - 1]  *  i)  %  mod;
// 	for (ll i = 0 ; i <= MAXN  ;  i ++)
// 		inv[i] = pw(fact[i] ,  mod - 2);
// }ll choose(ll n ,ll k){
//     return ((((fact[n]  *  inv[k])  %  mod)  *  inv[n - k])  %  mod)%mod;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll n,m,k,t,range;
ll l[200005],r[200005],d[200005];
ll ans=200005;
std::vector<ll> a;
vector<pair<ll,ll> > v;

ll f(ll mini,ll maxi){

	if(maxi<mini)
		return 0;

	ll mid = (ll)((mini+maxi)/2);
	v.clear();
	for(ll i=0;i<k;i++){
		if(d[i]>mid){
			v.push_back({l[i],1});
			v.push_back({r[i],-1});
		}
	}

	sort(v.begin(),v.end());
	ll start=-1,sum=range;
	ll temp=0;
	start=v[0].first;

	for(ll i=0;i<v.size();i++){
		if(temp==0)
			start=v[i].first;
		temp+=(v[i].second);
		if(temp==0){
			if(i+2<v.size() && v[i+1].first==v[i].first){
				temp+=(v[i+1].second);
				i++;
			}
			else
				sum+=2*(v[i].first-start+1)	;
		}
	}
	// cout<<sum<<"<-Time : mid->"<<mid<<endl;
	if(sum <= t){
		ans=min(ans,mid);
	}

	if( sum < t ){
		return f(mini,mid-1);
	}else{
		return f(mid+1,maxi);
	}

	return 0;
}

int main()
{
	ios
	cin>>m>>n>>k>>t;
	for(ll i=0;i<m;i++){
		ll xx;
		cin>>xx;
		a.push_back(xx);
	}
	sort(a.begin(),a.end());
	range=n+1;

	for(ll i=0;i<k;i++){
		cin>>l[i]>>r[i]>>d[i];
	}

	f(0,a[m-1]);


	for(ll i=0;i<m;i++){
		if(ans<=a[i]){
			cout<<m-i;
			return 0;
		}

	}
	cout<<"0";
	return 0;
}
