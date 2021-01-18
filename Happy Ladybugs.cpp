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
    int g;
    cin>>g;

    while(g--)
    {

        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=0;
        int a[100]={0};

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='_')
                cnt++;
            else
            {
                a[s[i]]++;
            }
        }

        if(s.length()==1)
        {
           if(cnt==0)
               cout<<"NO"<<nl;
           else
              cout<<"YES"<<nl;

        }
        else
        {
            bool fl=true;

            for(int i=0; i<100; i++)
            {
                if(a[i]>0 && a[i]<2)
                {
                    fl=false;

                }

            }


            if(fl==false)
            {

                cout<<"NO"<<nl;
            }
            else
            {
                fl=true;
                for(int i=1; i<s.length()-1; i++)
                {
                    if(s[i]!=s[i-1] && s[i]!=s[i+1])
                    {
                        fl=false;
                        break;
                    }
                }

                if(fl==false)
                {
                    if(cnt>0)
                        cout<<"YES"<<nl;
                    else
                        cout<<"NO"<<nl;
                }
                else
                    cout<<"YES"<<nl;
            }
        }

    }


    return 0;
}
