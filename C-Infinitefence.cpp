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
		double a,b,k;
		cin>>a>>b>>k;
		// cout<<ceil((max(a,b)-1)/(min(a,b)))<<endl;
		if( k<= ceil((max(a,b)-__gcd((ll)a,(ll)b))/(min(a,b))))
			cout<<"REBEL"<<endl;
		else
			cout<<"OBEY"<<endl;
	}
	return 0;
}
 
