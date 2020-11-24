//Algorithm....... Next lexicographical permutation algorithm

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s,srt;
        cin>>s;

        srt=s;

        int sz=s.size();

        sort(srt.begin(),srt.end());

        reverse(srt.begin(),srt.end());

        if(s==srt)
            cout<<"no answer\n";
        else
        {
            int mx=0,cnt=0,i,ind=sz-1,st;

            for(i=0; i<sz-1; i++)
            {
                if(s[i]>=s[i+1])
                {
                    cnt++;

                }
                else
                {
                    cnt++;
                    //if(cnt>=mx)
                    //{
                        mx=cnt;
                        ind=i-mx+1;
                    //}
                    cnt=0;

                }
            }
            if(s[sz-2]>=s[sz-1])
            {
                    cnt++;
                   // if(cnt>=mx)
                    //{
                        mx=cnt;
                        ind=i-mx+1;
                    //}
            }
            if(mx==1)
                ind=sz-1;



            int povt=ind-1;

            for(i=ind+mx-1; i>=ind; i--)
            {
                if(s[i]>s[povt])
                {
                    swap(s[i],s[povt]);
                    break;
                }
            }
            //cout<<ind<<" "<<mx<<endl;

            sort(s.begin()+povt+1,s.end());

            cout<<s<<"\n";
        }
    }


    return 0;
}

