#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
ll k;
ll maxi=0,mini=0;
vector<ll> v[200001];
ll dp[200001];
unordered_map<ll,unordered_map<ll,ll> > dis;
 
ll f(ll parent){
    //cout<<"1";
    if(dp[parent]>0)return dp[parent];
    //cout<<"2";
    dp[parent]=-1;
    ll ans=0;
    for(ll i=0;i<v[parent].size();i++){
        ll child=v[parent][i];
      //  cout<<"chld "<<child<<"<--";
        if(dp[child]!=-1 )
            ans+=f(child);//>0 ? f(child) : 0 ;
    }
    //cout<<"3";
    dp[parent]=ans+1;
    for(ll i=0;i<v[parent].size();i++){
        ll child=v[parent][i];
        if(dp[child]!=-1){
            //cout<<child<<"=="<<parent <<" --->>>"<<dis[child][parent]<<"     "<<min(dp[child],2*k-dp[child])<<endl;
            maxi+=(min(dp[child],2*k-dp[child])*(dis[child][parent]));
            if(dp[child]%2==1 || 2*k-dp[child]%2==1 )
                mini+=dis[child][parent];
        }
    }//cout<<"4";
 
    return dp[parent];
}
 
int main()
{
    ios
    ll t;
    cin>>t;
    while(t--){
        maxi=0;
        mini=0;
        ll start;
        cin>>k;
        for(ll i=1;i<=2*k;i++)v[i].clear();
       // memset(dp,0,sizeof(dp));
        dp[2*k-1]=0;
        dp[2*k]=0;
        for(ll i=0;i<2*k-1;i++){
            dp[i]=0;
            ll u1,u2,time;
            cin>>u1>>u2>>time;
            v[u1].pb(u2);
            v[u2].pb(u1);
            dis[u2][u1]=time;
            dis[u1][u2]=time;
        }for(ll i=1;i<=2*k;i++){
            if(v[i].size()==1){
                start=i;
                dp[i]=1;
            }
        }
        dp[start]=-1;
        f(start);
        cout<<mini<<" "<<maxi<<endl;
 
    }
 
    return 0;
}
