#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N1[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
    int N2[] = {31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
    int N3[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    int N4[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};

    int n;
    bool found = 0;
    cin>>n;
    int inp[n];
    for(int i=0; i<n; i++)
    {
        cin>>inp[i];
    }

    for(int i=0; i<36 - n; i++)
    {
        int j;
        for(j=0; j<n; j++)
        {
            if(inp[i+j] != N1[j]) break;
        }
        if(j==n) found = 1;
    }
    if(found!=1)
    {
        for(int i=0; i<36 - n; i++)
        {
            int j;
            for(j=0; j<n; j++)
            {
                if(inp[i+j] != N2[j]) break;
            }
            if(j==n) found = 1;
        }
    }
    if(found!=1)
    {
        for(int i=0; i<36 - n; i++)
        {
            int j;
            for(j=0; j<n; j++)
            {
                if(inp[i+j] != N3[j]) break;
            }
            if(j==n) found = 1;
        }
    }
    if(found!=1)
    {
        for(int i=0; i<36 - n; i++)
        {
            int j;
            for(j=0; j<n; j++)
            {
                if(inp[i+j] != N4[j]) break;
            }
            if(j==n) found = 1;
        }
    }

    if(found == 1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
