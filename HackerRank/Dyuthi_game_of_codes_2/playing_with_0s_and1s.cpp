#include<bits/stdc++.h>
using namespace std;
bool pattern[10000007];

void init()
{
    memset(pattern,0,10000007*sizeof(bool));
}

void print()
{
    for(int i=1;i<50;i++)
        cout<<pattern[i];

}

void make_pattern()
{
    pattern[1] = 0;
    pattern[2] = 1;

    int idx = 3,size = 2,itr=1,st=1,i;
    while(idx <= 107)
    {
        cout<<"idx: itr: st: size: "<<idx<<" "<<itr<<" "<<st<<" "<<size<<endl;
        st = 0;
        for(i=idx,itr=1,st=0;itr<=size;idx++,itr++,st++)
        {
            pattern[i] = ~pattern[st];
            //cout<<pattern[i]<<" "<<pattern[st]<<" ";
        }
        size*=2;
        print();
    }

}

int main()
{
    init();
    make_pattern();
    return 0;
}
