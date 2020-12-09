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
    int n,m;
    cin>>n>>m;

    int a[n]={0},x;

    for(int i=0; i<m; i++)
    {
        cin>>x;
        a[x]++;

    }
    int ans=0;

    if(m==1)
    {
        ans=max(abs(x-0),abs(n-1-x));
        cout<<ans<<nl;
    }
    else
    {
        int pos1=0;
        int ans=0;


        for(int i =n-1; i>=0; i--)
        {
            if(a[i]==1)
            {
                if(n-1-i>ans)
                    ans=n-1-i;
                break;
            }
        }

        for(int i =0; i<n; i++)
        {
            if(a[i]==1)
            {
                pos1=i;

                if(i>ans)
                    ans=i;
                break;
            }
        }

        for(int i=pos1+1; i<n; i++)
        {
            if(a[i]==1)
            {
                if((i-pos1)/2>ans)
                {
                    ans=(i-pos1)/2;
                }
                pos1=i;
            }

        }
        cout<<ans<<nl;
    }


    return 0;
}
