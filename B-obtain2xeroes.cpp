#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
ll n;
 
 
int main()
{	
	ios
	cin>>n;
	while(n--){
		ll a,b;
		cin>>a>>b;
		if((a+b)%3==0 && 2*min(a,b)>=max(a,b))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
