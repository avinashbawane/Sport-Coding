#include <bits/stdc++.h>
using namespace std;

int main() {
    string inp;
    cin>>inp;
    if(inp[1] == '+') cout<<(inp[0]-'0')+(inp[2]-'0')<<endl;
    else cout<<(inp[0]-'0')-(inp[2]-'0')<<endl;
    return 0;
}
