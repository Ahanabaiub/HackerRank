#include <bits/stdc++.h>

using namespace std;



// Complete the beautifulDays function below.


int main()
{
   int cnt=0,p,i=10,j=20;

    for(p=i; p<=j; p++)
    {
        int num=p,Reverse=0,lastdig;

        while(num>0)
        {
            lastdig=num%10;
            num/=10;
            Reverse=(Reverse*10)+lastdig;
        }
        cout<<Reverse<<endl;
    }

}
