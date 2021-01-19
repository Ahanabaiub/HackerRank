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
    int h,w;
    cin>>h>>w;

    int a[h][w];

    for(int i=0; i<h; i++)
    {

        for(int j=0; j<w; j++)
        {

            cin>>a[i][j];
        }
    }

    int price = 0,cur;

     for(int i=0; i<h; i++)
    {

        for(int j=0; j<w; j++)
        {
            cur=2;

            //up
            if(i==0)
            {
                cur+=a[i][j];
            }
            else
            {

                if(a[i][j]>a[i-1][j])
                {
                    cur+=a[i][j]-a[i-1][j];
                }
            }

            //down
            if(i==h-1)
            {
                cur+=a[i][j];
            }
            else
            {

                if(a[i][j]>a[i+1][j])
                {
                    cur+=a[i][j]-a[i+1][j];
                }
            }

            //left
            if(j==0)
            {
                cur+=a[i][j];
            }
            else
            {

                if(a[i][j]>a[i][j-1])
                {
                    cur+=a[i][j]-a[i][j-1];
                }
            }

            //right
            if(j==w-1)
            {
                cur+=a[i][j];
            }
            else
            {

                if(a[i][j]>a[i][j+1])
                {
                    cur+=a[i][j]-a[i][j+1];
                }
            }


            price+=cur;




        }
    }

    cout<<price<<nl;



    return 0;
}
