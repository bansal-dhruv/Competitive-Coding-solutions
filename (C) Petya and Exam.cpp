#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
 
vector<pair<ll,ll> > v;
int main()
{
    ios
    int t;
    cin>>t;
    while(t--){
        ll n,t,a,b;
        ll easy=0,hard=0,A=0,B=0;
        cin>>n>>t>>a>>b;
        ll maxi=0;
        ll m[200005];
        for(ll i=0;i<n;i++){
                cin>>m[i];
                if(m[i]==1)B++;
                else A++;
        }
 
        for(ll i=0;i<n;i++){
            ll tt;
            cin>>tt;
            v.pb({tt,m[i]});
        }sort(v.begin(),v.end());
 
                ll time=v[0].first-1;
                time-=(easy*a + hard*b );
                if(time>=0)maxi=max(maxi,easy+hard);
                if(time>=0){
                ll mm=0;
                mm=min((time/a),A);
                time-=mm*(a);
                mm+=min((time/b),B);
                maxi=max(maxi,mm+easy+hard);}
 
 
        for(ll i=0;i<n;i++){
 
            ll time=v[i].first;
            if(time>t)break;
            ll mm=0;
 
            if(i>0 && time!=v[i-1].first){
                time=v[i].first-1;
                time-=(easy*a + hard*b );
                if(time>=0)maxi=max(maxi,easy+hard);
                if(time>=0){
                mm=0;
                mm=min((time/a),A);
                time-=mm*(a);
                mm+=min((time/b),B);
                maxi=max(maxi,mm+easy+hard);}
            }
 
 
 
            if(v[i].second==1){
                B--;
                hard++;
            }
            else{
                A--;
                easy++;
            }
 
            if(i+1<n && v[i+1].first == v[i].first)continue;
 
            mm=0;
            time=v[i].first;
            time-=(easy*a + hard*b );
            if(time>=0)maxi=max(maxi,easy+hard);
            else continue;
 
            mm=min((time/a),A);
            time-=mm*(a);
            mm+=min((time/b),B);
            maxi=max(maxi,mm+easy+hard);
 
        }
 
            t-=(easy*a + hard*b );
            if(t>=0)maxi=max(maxi,easy+hard);
 
            if(t>=0)
            {
 
            ll mm=0;
            mm=min((t/a),A);
            t-=mm*(a);
            mm+=min((t/b),B);
            maxi=max(maxi,mm+easy+hard);
            }
 
            cout<<maxi<<endl;
            v.clear();
 
    }
 
 
    return 0;
}
