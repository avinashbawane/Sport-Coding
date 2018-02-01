#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sim_color[101] = {0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        sim_color[tmp]++;
    }

    int count = 0;
    for(int i=0;i<101;i++)  count+= (sim_color[i]/2);

    cout<<count<<endl;
    return 0;
}
