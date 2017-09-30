#include<bits/stdc++.h>
using namespace std;
bool ck,si,ea;
bool em_m[2],mh_h[2];

bool check()
{
    if(ck == true && si == true && ea == true && (em_m[0] == true || em_m[1] == true) && (mh_h[0] == true || mh_h[1] == true))
        return true;
    else return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ck = si = ea = false;
        em_m[0] = em_m[1] = mh_h[0] = mh_h[1] = false;
        int n;
        string tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            if(tmp[0] == 'c') ck = true;
            else if(tmp[0] == 's') si = true;
            else if(tmp[0] == 'e' && tmp.size() == 4) ea = true;
            else if(tmp[0] == 'm' && tmp.size() == 6) em_m[1] = true;
            else if(tmp[0] == 'e' && tmp.size() == 11) em_m[0] = true;
            else if(tmp[0] == 'm' && tmp.size() == 11) mh_h[0] = true;
            else if(tmp[0] == 'h') mh_h[1] = true;
        }
        if(check()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    getchar();
    return 0;
}
