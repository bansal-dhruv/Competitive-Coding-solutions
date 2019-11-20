//https://codeforces.com/problemset/problem/1255/D
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back 
ll r,c,k,rice=0;
ll base,bonus;
ll mod=1000000007;
ll a[105][105];
char arr[105][105];

void f(){
	ll num=0;
	ll left=base;
	if (bonus>0){
		bonus--;
		left++;
	}
	for(int i=0;i<r;i++){
		if(i%2==0)
			for(int j=0;j<c;j++){
				if(arr[i][j]=='R'){
					left--;
				}a[i][j]=num;
				if(left<=0){
					left=base;
					num++;
					if(bonus>0){
						bonus--;
						left++;
					}
				}
			}
		else{
			for(int j=c-1;j>=0;j--){
				if(arr[i][j]=='R'){
					left--;
				}a[i][j]=num;
				if(left<=0){
					left=base;
					num++;
					if(bonus>0){
						bonus--;
						left++;
					}
				}
			}
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]>=k)
				a[i][j]=k-1;
		}
	}

}


int main()
{	
	ios
	ll t;
	cin>>t;
	while(t--){
		rice=0;
		cin>>r>>c>>k;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++){
				cin>>arr[i][j];
				if(arr[i][j]=='R')
					rice++;
			}
		base=rice/k;
		bonus=rice%k;
		f();
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(a[i][j]>=10){
					if(a[i][j]>=36){ // A
						cout<<char(a[i][j]+61);
					}else{ // a
						cout<<char(a[i][j]+55);
					}
				}else
					cout<<a[i][j];
			}cout<<endl;
		}
	}
	return 0;
}

