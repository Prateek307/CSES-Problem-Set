// link to the problem ---> https://cses.fi/problemset/task/1635/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(vector<ll> &v, ll n , ll target,vector<ll> &dp)
{
    if(target<=0)
    {
        if(target==0)
        return 1;
        return 0;
    }

    if(dp[target]!=-1)
    return dp[target];

    ll i, ans = 0;
    for(i=0;i<n;i++)
    {   
        if(target-v[i]>=0)
        ans= (ans + solve(v,n,target-v[i],dp))%1000000007; 
    } 
    return dp[target] = ans;
}
int main()
{ 
    ll n,target;
    cin>>n>>target;
    vector<ll> v(n);
    ll i;
    for(i=0;i<n;i++)
    cin>>v[i];
    vector<ll> dp(10000000);
    for(i=0;i<10000000;i++)
    dp[i] = -1;
    cout<<solve(v,n,target,dp)<<'\n';
    return 0;
}