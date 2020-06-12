#include<bits/stdc++.h>
#define    fios ios_base::sync_with_stdio(false); cin.tie(0);
#define    sf(x) scanf("%d",&x)
#define    sfl(x) scanf("%lld",&x)
#define    pf(x) printf("%d\n",x)
#define    pfl(x) printf("%lld\n",x)
#define    ll long long
#define    nl "\n"
#define    PB(x) push_back(x)
#define    For(i,n) for(int i=0; i<n; i++)
#define    PI acos(-1)
using namespace std;

ll nCr(int n, int r)
{
    if(r==0 || n==r)
        return 1;

    return nCr(n-1,r)+nCr(n-1,r-1);

    //return ans;
}

void solve(int n)
{
    int r=2;

   ll ans=nCr(n,r);

    cout<<ans<<nl;


}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        solve(n);

    }

    return 0;
}
