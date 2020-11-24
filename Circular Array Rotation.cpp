#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,k,q,x;
    cin>>n>>k>>q;

    int a[n+5],ans[n+5];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(k>=n)
        k-=n;


      for(i=0; i<n; i++)
      {
          x=i+k;

          if(x>n-1)
            x=x%n;

          ans[x]=a[i];
      }


    for(i=0; i<q; i++)
    {
        cin>>x;

        cout<<ans[x]<<"\n";
    }
    return 0;

}
