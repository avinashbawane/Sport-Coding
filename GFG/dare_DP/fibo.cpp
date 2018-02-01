#include<bits/stdc++.h>
using namespace std;

int recursion(int n)
{
    if (n == 0) return 0;
    else if(n == 1) return 1;
    else return recursion(n-1)+recursion(n-2);
}

int dp(int n)
{
    int fx_2,fx_1,fx;
    fx_2 = 0, fx_1 = 1;

    for(int i=2;i<=n;i++)
    {
        fx = f0 + f1; cout<<"f["<<i<<"]:"<<fx<<" "<<endl;
        f0 = f1;
        f1 = fx;

        cout<<f0<<" "<<f1<<endl;
    }
    return fx;
}

int main()
{
    int n;
    cin>>n;

    cout<<recursion(n)<<endl;

    cout<<dp(n)<<endl;

    return 0;
}
