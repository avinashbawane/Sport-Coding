#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;

    cin>>h>>m;
    if(h==00)
    {
        if (m<10) cout<<"0"<<h<<":0"<<m<<" AM"<<endl;
        else cout<<"0"<<h<<":"<<m<<" AM"<<endl;
    }
    else if(h==12)
    {
        if (m<10) cout<<h<<":0"<<m<<" PM"<<endl;
        else cout<<h<<":"<<m<<" PM"<<endl;
    }
    else if(h>12)
    {
        h = h-12;
        if(h<10 && m<10) cout<<"0"<<h<<":0"<<m<<" PM"<<endl;
        else if (h<10) cout<<"0"<<h<<":"<<m<<" PM"<<endl;
        else if (m<10) cout<<h<<":0"<<m<<" PM"<<endl;
        else cout<<h<<":"<<m<<" PM"<<endl;
    }
    else if(h<10 && m<10) cout<<"0"<<h<<":0"<<m<<" AM"<<endl;
    else if (h<10) cout<<"0"<<h<<":"<<m<<" AM"<<endl;
    else if (m<10) cout<<h<<":0"<<m<<" AM"<<endl;
    else cout<<h<<":"<<m<<" AM"<<endl;

    return 0;
}
