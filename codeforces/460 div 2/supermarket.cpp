#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<double> price;
    int market, kilo,tmp1,tmp2;
    cin>>market>>kilo;

    for(int i=0;i<market;i++)
    {
        cin>>tmp1>>tmp2;
        float val = (float)tmp1/tmp2;

        price.push_back(val);
    }
    sort(price.begin(),price.end());

    printf("%.7f\n",price[0]*kilo);
    return 0;

}
