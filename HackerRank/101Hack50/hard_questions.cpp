#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,score = 0;
    string vin,cath;
    cin>>len>>vin>>cath;
    for(int i=0;i<len;i++) if(vin[i]!='.' && vin[i]!=cath[i]) score++;
    cout<<score<<endl;
    return 0;
}
