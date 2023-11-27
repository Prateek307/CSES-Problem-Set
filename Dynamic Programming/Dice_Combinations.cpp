// link to the problem ---> https://cses.fi/problemset/task/1633

//Code
#include <bits/stdc++.h>
using namespace std;
long long ways(long long target, vector<long long> &dp)
{
    if (target <= 0)
    {
        if (target == 0)
            return 1;
        return 0;
    }
    if (dp[target] != -1)
        return dp[target];
    long long ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        ans = (ans + ways(target - i, dp)) % 1000000007;
    }
    return dp[target] = ans;
}
int main()
{
    long long target;
    cin >> target;
    vector<long long> dp(10000000);
    int i;
    for (i = 0; i < 10000000; i++)
        dp[i] = -1;
    cout<<ways(target,dp)<<'\n';
    return 0;
}
