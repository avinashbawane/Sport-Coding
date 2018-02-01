#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fr_1 = 0, fr_2 = 0;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i] == 1) fr_1++;
        else fr_2++;
    }

    int ans  = min(fr_2,fr_1);

    fr_1 -= min(fr_2,fr_1);

    ans += (fr_1/3);

    cout<<ans<<endl;
    return 0;
}
