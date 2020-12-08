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

    char a[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }

    for(int i=1; i<n-1; i++)
    {
        for(int j=1; j<n-1; j++)
            {
                if(a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j])
                {
                    a[i][j]='X';
                }
            }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j];

         cout<<nl;
    }



    return 0;
}
