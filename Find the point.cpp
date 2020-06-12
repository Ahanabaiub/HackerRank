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


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int px,py,qx,qy;

        cin>>px>>py>>qx>>qy;

        int dx=qx-px;
        int dy=qy-py;


            qx+=dx;


            qy+=dy;

        cout<<qx<<" "<<qy<<nl;

    }


    return 0;
}
