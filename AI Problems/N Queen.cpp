#include <bits/stdc++.h>
using namespace std;

void PlaceQueens(int pos[],int r, int sz)
{

    if(r==sz+1)
    {

        for(int i=1; i<=sz; i++)
            cout<<pos[i]<<" ";
            cout<<endl;
    }
    else
    {

        for(int j=1; j<=sz; j++)
        {
            bool legal = true;

            for(int i=1; i<r; i++)
            {
                if(pos[i]==j || (pos[i]==j+r-i) || (pos[i]==j-r+i))
                    legal=false;
            }
            if(legal)
            {
                pos[r]=j;
                PlaceQueens(pos,r+1,sz);

            }

        }
    }

}

int main()
{
    int pos[5];

    int sz=4;

    PlaceQueens(pos,1,sz);
}
