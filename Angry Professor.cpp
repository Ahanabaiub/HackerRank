#include <bits/stdc++.h>

using namespace std;


// Complete the angryProfessor function below.
string angryProfessor(int k,int a[],int n) {

    int cnt=0,i;

    for(i=0; i<n; i++)
    {
        if(a[i]<=0)
        {
            cnt++;
        }
    }

    if(cnt>=k)
       return "NO";
    else
       return "YES";


}

int main()
{
    int t,i;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        string res=angryProfessor(k,a,n);
        cout<<res<<"\n";
    }
   return 0;
}
