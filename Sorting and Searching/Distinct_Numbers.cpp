// link to the problem --->  https://cses.fi/problemset/task/1621

// code
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    set<int> st;
    int i,x;
    for(i=0;i<n;i++)
    {
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<'\n';
    return 0;
}
