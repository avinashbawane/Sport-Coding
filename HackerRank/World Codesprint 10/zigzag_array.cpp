#include <bits/stdc++.h>

using namespace std;

int minimumDeletions1(vector < int > a)
{
    // Complete this function
    int n = a.size();
    int del = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j+2<n; j++)
        {
            if((a[j]>a[j+1] && a[j+1]>a[j+2])  || (a[j]<a[j+1] && a[j+1]<a[j+2]))
            {
                a.erase(a.begin()+j);
                del++;
            }
        }
    }
    return del;
}
int minimumDeletions2(vector < int > a)
{
    // Complete this function
    int n = a.size();
    int del = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j+2<n; j++)
        {
            if((a[j]>a[j+1] && a[j+1]>a[j+2])  || (a[j]<a[j+1] && a[j+1]<a[j+2]))
            {
                a.erase(a.begin()+(j+1));
                del++;
            }
        }
    }
    return del;
}
int minimumDeletions3(vector < int > a)
{
    // Complete this function
    int n = a.size();
    int del = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((a[j]>a[j+1] && a[j+1]>a[j+2])  || (a[j]<a[j+1] && a[j+1]<a[j+2]))
            {
                a.erase(a.begin()+(j+2));
                del++;
            }
        }
    }
    return del;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }
    // Return the minimum number of elements to delete to make the array zigzag
    int min1 = minimumDeletions1(a);
    int min2 = minimumDeletions2(a);
    int min3 = minimumDeletions3(a);
    int result = min(min1,min(min2,min3));
    if(n<3) cout<<0<<endl;
    else cout << result << endl;
    return 0;
}
