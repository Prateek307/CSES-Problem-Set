// link to the problem --->   https://cses.fi/problemset/result/7864040/


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(ll n , vector<ll> &dp)
{
    if(n<=0)
    {
        if(n==0)
        return 0;
        else
        return 1e9;
    }
    ll ans = 1e9;
    ll i;
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    string s = to_string(n);
    ll len = s.size();
    for(i=0;i<len;i++)
    {
        if(s[i]!='0')
        {
            ll val = s[i]-'0';
            ans = min(ans,1+solve(n-val,dp));
        }
    }
    return dp[n] = ans;
}
int main()
{
    ll n;
    cin>>n;
    vector<ll> dp(n+1,-1);
    cout<<solve(n,dp)<<'\n';
    return 0;
}