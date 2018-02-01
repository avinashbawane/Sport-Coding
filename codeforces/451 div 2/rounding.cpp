#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;
    if(n%10 == 0) cout<<n<<endl;
    else if(n%10 == 5) cout<<n-5<<endl;
    else if(n%10 > 0 && n%10 <5) cout<<n - (n%10)<<endl;
    else if(n%10 > 5) cout<<n + (10-(n%10))<<endl;

    return 0;
}
