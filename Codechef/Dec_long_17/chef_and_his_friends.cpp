#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    cin>>tests;
    while(tests--)
    {
        int m,n;
        cin>>m>>n;
        char grid[m][n];

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>grid[i][j];
            }
        }

        int cost = 0;

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                //if(i%2==0)
                //{
                    if(grid[i][j] == 'R' && grid[i][j+1] == 'R' && j+1<n)
                    {
                        cout<<grid[i][j+1]<<endl;
                        grid[i][j+1] = 'G';
                        cost+=5;
                        //j++;

                    }
                //}
                //else
                //{
                    else if(grid[i][j] == 'G' && grid[i][j+1] == 'G' && j+1<n)
                    {
                        cout<<grid[i][j+1]<<endl;
                        grid[i][j+1] = 'R';
                        cost+=3;
                        //j++;
                    }
                //}
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}
