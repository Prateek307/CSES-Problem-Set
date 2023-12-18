// link to the problem ---> https://cses.fi/problemset/task/1638

#include <bits/stdc++.h>
using namespace std;
long long solve(int i, int j, vector<vector<int>> &dp, vector<vector<char>> &v , int n)
{
    if (i >= n || j >= n || v[i][j] == '*')
        return 0;
    if (i == n - 1 && j == n - 1)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = (solve(i + 1, j, dp, v , n) + solve(i, j + 1, dp, v ,n)) % 1000000007;
}
int main()
{
    int n;
    cin >> n;
    int i, j;
    vector<vector<char>> v(n,vector<char>(n));
    vector<vector<int>> dp(n, vector<int>(n, -1));
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << solve(0, 0, dp, v , n) << '\n';
    return 0;
}