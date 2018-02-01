#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            int inp;
            cin>>inp;
            a.push_back(inp);
        }

        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a.size();j++)
            {
                if(a[j+1]<a[j]) swap(a[j],a[j+1]);
            }
        }
    }
    return 0;
}
