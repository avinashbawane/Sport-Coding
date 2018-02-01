#include<bits/stdc++.h>
using namespace std;

int main()
{
    int jump,slip,n;
    cin>>jump>>slip>>n;

    int wall[n];
    for(int i=0;i<n;i++)
        cin>>wall[i];

    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        while(jump < wall[i])
        {
            wall[i]-=(jump-slip);
            cnt++;
        }
        if(jump>=wall[i])
        {
            cnt++;
            continue;
        }
    }

    cout<<cnt<<endl;
    return 0;
}

