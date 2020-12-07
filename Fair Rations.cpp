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
    int n;
    cin>>n;

    int cnte=0,cnto=0;

    int a[n];
    int b[n]={0};

    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]%2!=0)
        {

            cnto++;
            b[i]=1;
        }
        else
        {
            cnte++;

        }
    }

        if(cnto%2!=0)
        {
            cout<<"NO"<<nl;

        }
        else
        {
            int mv=0;

            for(int i=0; i<n; i++)
            {
                if(a[i]%2==1)
                {
                    a[i+1]+=1;
                    mv+=2;
                }

            }
            cout<<mv<<nl;

        }


    return 0;
}
