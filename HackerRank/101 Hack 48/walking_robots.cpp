#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int l = s.length();
        int a[l] = {5};
        for(int i=0; i<l; i++)
        {
            if(s[i] == 'r') a[i] = 100;
            else if(s[i] == 'd') a[i] = 75;
            else if(s[i] == 'l') a[i] = 50;
        }
        int exp = 0;

        bool collide = false;
        for(int i=0; i<l; i++)
        {
            if(a[i]==100  && a[i+1] == 75)
            {
                a[i] = 1; a[i+1] =1;
                i++;
        //        collide = true;
            }
            else if(a[i]==100  && a[i+1] == 50)
            {
                a[i] = 2; a[i+1] =2;
                i++;
          //      collide = true;
            }
            else if(a[i]==75  && a[i+1] == 50)
            {
                a[i] = 1; a[i+1] =1;
                i++;
        //        collide = true;
            }
        }
        int r_left = 0;
        collide = false;
        for(int i=0;i<l;i++)
        {
            if(a[i] == 100) r_left ++;
            else if(a[i] == 1)
            {
                exp+=(1+r_left);
                i++;
                collide = true;
                r_left = 0;
            }
            else if(a[i] == 2)
            {
                exp+=(2+r_left);
                i++;
                collide = true;
                r_left = 0;
            }
            else if(a[i] == 50)
            {
                if(collide) exp++;
            }
        }
        cout<<exp<<endl;
    }
    return 0;
}
