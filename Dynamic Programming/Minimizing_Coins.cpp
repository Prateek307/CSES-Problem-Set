
// link to the problem ---> https://cses.fi/problemset/task/1634/

#include<bits/stdc++.h>
using namespace std;

long long  solve(vector<long long>&v , long long n , long long target , vector<long long>&dp)
{
    if(target<=0)
    {
        if(target==0)
        {
            return 0;
        }
        return 1e9;
    }
    if(dp[target]!=-1)
    return dp[target];
    long long i , ans = 1e9;
    for(i=0;i<n;i++)
    {
        ans = min(ans,solve(v,n,target-v[i],dp)+1);
    }
    return dp[target] = ans;
}

int main()
{ 
    long long n,target;
    cin>>n>>target;
    int i;
    vector<long long> v(n),dp(1000013);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<1000013;i++)
    dp[i] = -1;
    if(solve(v,n,target,dp)==1e9)
    cout<<-1<<'\n';
    else
    cout<<solve(v,n,target,dp)<<'\n';
    return 0;
}