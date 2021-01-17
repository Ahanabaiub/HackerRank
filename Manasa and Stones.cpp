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
        set<long long> ans;
        set<long long>::iterator it;

        int n,a,b;
        cin>>n>>a>>b;

        for(int i=0; i<n; i++)
        {

            ans.insert(i*a+(n-i-1)*b);
        }

        for(it=ans.begin(); it!=ans.end(); it++)
            cout<<*it<<" ";



        cout<<nl;


    }


    return 0;
}
