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
    int l,s1,s2,q;

    cin>>l>>s1>>s2>>q;

    double diffOfVelocity=abs(s1-s2);

    while(q--)
    {
        double x;
        cin>>x;

        double diffOfDistance=(sqrt(2)*l)-(sqrt(x)*sqrt(2));

        printf("%.4lf\n",diffOfDistance/diffOfVelocity);


    }




    return 0;
}
