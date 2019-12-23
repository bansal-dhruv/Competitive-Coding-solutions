
//https://codeforces.com/problemset/problem/1278/C

#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
 
int main()
{
    ios
    ll t,n;
    map<ll,ll> mp,mpi;
    cin>>t;
    while(t--){
        mp.clear();
        cin>>n;
        ll maxi=2*n;
        vector<ll>v(2*n);
        for(ll i=0;i<2*n;i++){
            cin>>v[i];
        }
        ll cnt=0;
        mp[0]=1;
        mpi[0]=2*n;
        for(int i=2*n-1;i>=n;i--){
            if(v[i]==1)cnt++;
            else cnt--;
            mp[cnt]=1;
            mpi[cnt]=i;
        }cnt=0;
 
        maxi=min(maxi,mpi[0]);
 
        for(int i=0;i<n;i++){
            if(v[i]==1)cnt--;
            else cnt++;
 
            if(mp[cnt]==1){
                maxi=min(maxi,mpi[cnt]-i-1);
            }
        }cout<<maxi<<endl;
        v.clear();
    }
 
    return 0;
}
