#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int left = n/1000;
    int lsum = 0;
    while(left)
    {
        lsum+=left%10;
        left/=10;
    }
    cout<<lsum<<endl;


    int right = n - (lsum*1000);

    int temp = right;
    while(rsum!=lsum)
    {

    }

    //cout<<temp/1000<<" "<<temp/10000<<" "<<temp/100000<<" "<<endl;
    //int sum = temp/10000 + temp/100000 + temp/1000000;

    return 0;
}
