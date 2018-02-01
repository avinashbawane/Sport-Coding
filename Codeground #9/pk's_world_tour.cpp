#include<bits/stdc++.h>
using namespace std;
int cost[25][3],dup[25][3];
int min_2[25][2],n;
void init()
{
    for(int i=0; i<25; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j==2) cost[i][j] = 0;
            else
            {
                cost[i][j] = 0;
                min_2[i][j] = -1;
            }
        }
    }
}

void printer()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<dup[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        //int n;
        cin>>n;
        int ans=0;
        for(int i=0; i<n; i++)
            cin>>cost[i][0]>>cost[i][1]>>cost[i][2];

        for(int i=0; i<n; i++)
        {
            dup[i][0] = cost[i][0];
            dup[i][1] = cost[i][1];
            dup[i][2] = cost[i][2];
        }

        int j=0;
        for(int i=0; i<n; i++)
        {
            sort(dup[i][j],dup[i][j+2]);
        }
        printer();
    }
    return 0;
}
