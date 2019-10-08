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
	ll n,cnt=0,ans=0,A=0,B=0,lasta=-1,lastb=-1;
	cin>>n;
	cin>>s;
	if(s[n-1]=='A'){
		A++;
		lasta=n-1;
	}
	else {
		B++;
		lastb=n-1;
	}

	for(ll i=n-2;i>=0;i--){
		
		if(s[i]=='A'){

			if(lasta==-1){
				lasta=i;
				continue;
			}

			ans+=n-lasta;
			if(lastb!=-1 && lastb>lasta)
				ans--;
			
		}else if (s[i]=='B'){
			if(lastb==-1){
				lastb=i;
				continue;
			}
			ans+=n-lastb;
			if(lasta!=-1 && lasta>lastb)
				ans--;
		}

		if(s[i]=='A')
			lasta=i;
		else
			lastb=i;
	
	}

	cout<<ans;
		
	return 0;
}
