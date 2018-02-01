#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int> a(n),need(n);
        int ex_even = 0,ex_odd = 0;
        bool all_even = true;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2 != 0) all_even = false;
            if(i%2==0)
            {
                if(a[i]%2 != 0 && a[i] > 2) need[i] = -1;
                else if(a[i] == 1) need[i] = 1;
                if (a[i] > 2) ex_even += a[i]-2;
            }
            else
            {
                if(a[i]%2 == 0 && a[i] > 1) need[i] = -1;
                if(a[i] > 1) ex_odd += a[i]-1;
            }
        }

        if(all_even) cout<<-1<<endl;
        else
        {
            int cnt = 0;
            for(int i=0; i<n; i++)
            {
                if(need[i] != 0 ) cnt++;
            }

            if(cnt == 0) cout<<0<<endl;
            else if(cnt%2 == 0) cout<<cnt/2<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}
