#include<bits/stdc++.h>
using namespace std;

int isSorted(vector<int> v,int n)
{
    if(n == 1) return 1;
    else return (v[n-1]>v[n-2]?isSorted(v,n-1):0);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    if( isSorted(v,n)) cout<<"Array is sorted !!!"<<endl;
    else cout<<"Array is not sorted"<<endl;

    return 0;
}
