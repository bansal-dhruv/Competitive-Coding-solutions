#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back
 
ll mod=1000000009;
string s;

int main()
{	
	ios
	ll n,x,y;
	cin>>n;
	while(n--){
		cin>>x>>y;
		if(x-y>1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
