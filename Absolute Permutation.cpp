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
        int n,k;
        cin>>n>>k;

        if(k==0)
        {
            for(int i=1; i<=n; i++)
                cout<<i<<" ";
        }
        else
        {

            if((n%2==0 && k==1))
            {
                bool fl=0;

                for(int i=1; i<=n; i++)
                {
                    if(fl==0)
                    {
                        cout<<i+1<<" ";
                        fl=1;
                    }
                    else
                    {
                        cout<<i-1<<" ";
                        fl=0;
                    }
                }
            }
            else
               {



                   if(n%k==0 && (n/k)%2==0)
                   {
                       int cnt=0;
                       bool fl=0;
                       for(int i=1; i<=n; i++)
                       {
                           if(fl==0)
                           {
                               cout<<i+k<<" ";
                               cnt++;
                           }
                           else
                           {
                               cout<<i-k<<" ";
                               cnt++;
                           }

                           if(cnt==k)
                           {
                               cnt=0;

                               if(fl==0)
                                fl=1;
                               else
                                fl=0;
                           }

                       }

                   }
                   else
                     cout<<-1;
               }
        }

        cout<<nl;

    }


    return 0;
}
