#include<bits/stdc++.h>
using namespace std;

int main()
{

    int c1,c2,h1,h2;
    cin>>c1>>c2>>h1>>h2;
    bool is_possible  = false;

    for(int i=35;i<=95;i++)
    {
        if(i>=c1 && i>=c2 && i<=h1 && i<=h2)
        {
            is_possible = true;
            break;
        }
    }

    if(is_possible) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
