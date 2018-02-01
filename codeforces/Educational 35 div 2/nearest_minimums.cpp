#include<bits/stdc++.h>
using namespace std;

int main()
{
    int min = INT_MAX;
    int n;
    cin>>n;
    vector<int> v(n), idx;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i] < min) min = v[i];
    }

    for(int i=0;i<n;i++) if(v[i] == min) idx.push_back(i);

    int dist,min_dist = INT_MAX;

    for(int i=1,j=0;i<idx.size();i++,j++)
    {
        if(idx[i]-idx[j] < min_dist) min_dist = idx[i]-idx[j];
    }

/*    for(int i=0;i<idx.size();i++)
    {
        cout<<idx[i]<<" ";
    }
*/
    cout<<min_dist<<endl;

    return 0;
}
