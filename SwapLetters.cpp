#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back

ll mod=1000000009;
ll a=0,b=0,ab=0,ba=0;
std::vector<ll> bav;
std::vector<ll> abv;

int main()
{	
        ios
	int n;
	string s1,s2;
	cin>>n;
	cin>>s1>>s2;
	for(int i=0;i<n;i++){
		if(s1[i]==s2[i]){
			if(s1[i]=='a')
				a+=2;
			else
				b+=2;

			continue;
		}

		if(s1[i]=='b' && s2[i]=='a'){
			ba++;
			bav.push_back(i);
			a++;
			b++;
		}else{
			ab++;
			abv.push_back(i);
			a++;
			b++;
		}

	}

	if(ab%2==0 && ba%2==1){
		cout<<-1;
		return 0;
	}if(ab%2==1 && ba%2==0){
		cout<<-1;
		return 0;
	}if(a!=b){
		cout<<-1;
		return 0;
	}

	ll t=0;
	t=(ll)ab/2+(ll)(ba/2) + (ba%2)*2;
	cout<<t<<endl;
	for(ll i=1;i<abv.size();i+=2){
		cout<<abv[i]+1<<" "<<abv[i-1]+1<<endl;
	}for(ll i=1;i<bav.size();i+=2){
		cout<<bav[i]+1<<" "<<bav[i-1]+1<<endl;
	}
	if(ab%2!=0){
		cout<<abv[abv.size()-1]+1<<" "<<abv[abv.size()-1]+1<<endl;
		cout<<abv[abv.size()-1]+1<<" "<<bav[bav.size()-1]+1<<endl;
	}



	return 0;
	
}
