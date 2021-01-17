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

    int ll time,h=3,t=1;

    cin>>time;

    while(1)
    {
        if(time>=t && time<=(h+t-1))
        {

            cout<<h-(time-t)<<endl;
            break;
        }

        t=h+t;
        h=t+2;

    }

    return 0;
}
