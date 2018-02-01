#include<bits/stdc++.h>
using namespace std;

int perf(int num)
{
    int sum = 0;

    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    if(sum == 10) return 1;
    else return 0;
}

int main()
{
    int n;
    cin>>n;

    vector<int> perfect_no;

    for(int i=19;i<=10800101;i++)
    {
        int ans = perf(i);
        if(ans) perfect_no.push_back(i);
    }
    //10800100
    cout<<perfect_no[n-1]<<endl;

    return 0;
}
