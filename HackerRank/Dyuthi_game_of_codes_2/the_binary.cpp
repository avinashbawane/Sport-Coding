#include<bits/stdc++.h>
using namespace std;
int bin[12];

void init()
{
    for(int i=0; i<12; i++) bin[i] = 0;
}

int consec_1()
{
    int global_max = 0,tmp,j;
    for(int i=0; i<12; i++)
    {
        if(bin[i]==1)
        {
            tmp=0;
            for(j=i; j<12; j++)
            {
                if(bin[j] == 0) break;
                else tmp++;
            }
            if(tmp>global_max) global_max = tmp;
            i = j;
        }
    }
    return global_max;
}

void find_bin(int n)
{
    int i=0;
    while(n>0)
    {
        bin[i++] = n%2;
        n/=2;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        init();
        cin>>n;
        find_bin(n);
        cout<<consec_1()<<endl;
    }
    return 0;
}
