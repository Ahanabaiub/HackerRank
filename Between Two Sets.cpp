#include <bits/stdc++.h>

using namespace std;



int getTotalX(vector<int> a, vector<int> b) {

    int minb=INT_MAX,ans=0;

    for(int i=0; i<b.size(); i++)
    {
        if(b[i]<minb)
          minb=b[i];
    }

    int lcm=1;

    for(int i=0; i<a.size(); i++)
    {
        lcm=(lcm*a[i])/__gcd(lcm,a[i]);
    }

    int mul=lcm,x=1,cnt=0;

    while(mul<=minb)
    {
        cnt=0;
        for(int i=0; i<b.size(); i++)
        {

            if(b[i]%mul==0)
            {
                cnt++;

            }
        }
        if(cnt==b.size())
        {
            ans++;

        }

        mul=lcm*(++x);

    }
    return ans;

}

int main()
{

    int n,m,i;

    cin>>n>>m;

    vector<int>a(n),b(m);

    for(i=0; i<n; i++)
        cin>>a[i];

    for(i=0; i<m; i++)
        cin>>b[i];


    int total=getTotalX(a,b);


    cout << total << "\n";



    return 0;
}

