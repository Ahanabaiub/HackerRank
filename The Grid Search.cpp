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

//string convertToString(char *)


int main()
{
    int q;
    cin>>q;

    while(q--)
    {
        int n,m,a,b;

        cin>>n>>m;

        char ar[n][m];

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {

                cin>>ar[i][j];
            }
        }

       /* string arr[n];

        for(int i=0; i<n; i++)
        {

            cin>>arr[i];
        }*/

        cin>>a>>b;

        char ar1[a][b];
        for(int i=0; i<a; i++)
        {

            for(int j=0; j<b; j++)
            {

                cin>>ar1[i][j];
            }

        }


        bool flag=0;



        for(int i=0; i<=n-a; i++)
        {

            for(int j=0; j<=m-b; j++)
            {
                 bool fl=0;
                for(int k=0; k<a; k++)
                {

                    for(int l=0; l<b; l++)
                    {
                        if(ar1[i+k][j+l]!=ar[k][l])
                        {
                            fl=1;
                            break;
                        }

                    }

                    if(fl==1)
                        break;
                }

                if(fl==0)
                {
                    flag=1;
                    break;
                }

            }


            if(flag==1)
            {
                break;
            }
        }

        if(flag==1)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;

    }


    return 0;
}
