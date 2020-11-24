#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,mx=-1,cnt,rep=0;
    bool fl=0;

    cin>>n>>m;

    string x;

    vector<string> vs;
    //vector<string>:: iterator it;

    for(i=0; i<n; i++)
    {
        cin>>x;

        vs.push_back(x);
    }

    //for(i=0; i<n; i++)
        //cout<<vs[i]<<"\n";

        //cout<<vs[0][1];

        for(i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                cnt=0;
                fl=0;
                for(int p=0; p<m; p++)
                {
                    if(vs[i][p]=='1' || vs[j][p]=='1')
                    {
                        cnt++;
                    }
                }
                if(cnt>mx)
                {
                    mx=cnt;
                    //fl=1;
                    rep=0;

                }

                if(mx==cnt)
                    rep++;
            }
        }

           /*for(i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                cnt=0;
                for(int p=0; p<m; p++)
                {
                    if(vs[i][p]=='1' || vs[j][p]=='1')
                    {
                        cnt++;
                    }
                }
                if(cnt==mx)
                {
                    rep++;
                }
            }
        }*/

        cout<<mx<<"\n"<<rep<<"\n";



    return 0;
}
