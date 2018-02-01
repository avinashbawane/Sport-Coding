#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m1,m2,m3;
    cin>>m1>>m2>>m3;

    int points = 0;

    if(m1*10 > 100) points+=100;
    else points+= (m1*10);
    if(m2*10 > 100) points+=100;
    else points+= (m2*10);
    if(m3*10 > 100) points+=100;
    else points+= (m3*10);

    cout<<points<<endl;

    return 0;
}
