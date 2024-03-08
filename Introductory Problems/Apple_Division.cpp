#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(ll index , ll sum1 , ll sum2 , vector<ll> &v , ll &ans)
{
    if(index==v.size())
    {
        ans = min(ans,abs(sum1-sum2));
        return;
    }

    solve(index+1,sum1+v[index],sum2,v,ans);
    solve(index+1,sum1,sum2+v[index],v,ans);
}
int main()
{ 
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it : v)
    cin>>it;
    ll ans = INT_MAX;
    solve(0,0,0,v,ans);
    cout<<ans<<'\n';
    return 0;
}