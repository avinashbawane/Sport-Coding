#include<bits/stdc++.h>
using namespace std;

int bin_srch(vector<int> v2, int beg, int mid, int end,int num)
{
    mid = (beg+end)/2;
    if(v2[mid] >= v2[mid-1] && v2[mid] < num+1) return (mid+1);
    else if(v2[mid] <= num+1) return ( v2,mid+1,mid,end,num );
    else if( v2[mid] > num ) return ( v2, beg, mid, mid-1 );
    else return -1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v1(n),v2(n);
        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];

        sort(v2.begin(),v2.end());

        for(int i=0;i<n;i++)
        {
            cout<<bin_srch(v2,0,0,n,v1[i])<<" ";
        }
        cout<<endl;
    }
    return 0;
}
