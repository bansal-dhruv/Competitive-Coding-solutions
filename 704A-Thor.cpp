#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back
 
 
vector< ll > mssg;
ll notification=0,totalread=0;
ll t,x,read[300002],unread[300002],buffer[300002];
ll Q=0;
 
int main()
{	
	// ios
	ll n,q;
	cin>>n>>q;
	
	memset(unread, 0, sizeof(unread)); 
	memset(read, 0, sizeof(read)); 
 
	for(ll i=0;i<q;i++){
		int type;
		cin>>type;
		
		if(type==1){
 
			cin>>x;
 
			mssg.push_back(x);
			notification++;
			unread[x]++;	
		
		}else if(type==2){
 
			cin>>x;
 
			notification-=unread[x];
			read[x]+=unread[x];
			buffer[x]+=unread[x];
			unread[x]=0;
		
		}else{
			
			cin>>t;
			for(ll i=Q;i<t;i++){
				ll msg = mssg[i];
				if(buffer[msg]>0)
					buffer[msg]--;
				else{
					read[msg]++;
					unread[msg]--;
					notification--;
				}
			}
 
			Q=max(Q,t);			
		}
 
		cout<<notification<<endl;
 
	}
	return 0;
}
