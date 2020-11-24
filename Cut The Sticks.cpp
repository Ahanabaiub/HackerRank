#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {

    int sz=arr.size();
    vector<int>ans;
    vector<int>::iterator it;

    int cnt=0,i,x=0;

    int num0=0,min=1005;

    for(i=0; i<sz; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    while(num0!=sz-1)
    {
        cnt=0;
        for(i=0; i<sz; i++)
        {

                arr[i]-=min;
                if(arr[i]>=0)
                    cnt++;

                if(arr[i]==0)
                {
                    num0++;
                }


        }
        ans.push_back(cnt);

        for(i=0; i<sz; i++)
        {
            if(arr[i]<=min && arr[i]>0)
            {
                min=arr[i];
            }
        }




    }
    ans.push_back(1);

    return ans;

}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {


        cin>>arr[i];
    }

    vector<int> result = cutTheSticks(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }


    return 0;
}


