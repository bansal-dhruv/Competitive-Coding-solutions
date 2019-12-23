#include<bits/stdc++.h>
// https://codeforces.com/problemset/problem/1269/D
using namespace std;
#define ll long long
#define ld long double
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
ll n;
ll sum=0,s=0;
int main()
{
    ios
    cin>>n;
    stack<ll> s;
    vector<ll>v(n),a(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    for(ll i=0;i<n;i++){
        if(s.size()>0){
            if(s.top()==v[i]%2)
                s.pop();
            else
                s.push(v[i]%2);
        }else{
            s.push(v[i]%2);
        }
    }
 
    sum=sum-(ll)(ceil(((double)s.size())/((double)2)));
    cout<<(ll)ceil((double)sum/double(2));
    return 0;
}
