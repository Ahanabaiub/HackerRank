#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,x;

    cin>>n>>m;
    set<int>st;
    int a[m];

    for(i=0; i<n; i++)
    {
        cin>>x;

        st.insert(x);

    }

    for(i=0; i<m; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }


    return 0;
}
