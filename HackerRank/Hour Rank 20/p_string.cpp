#include <bits/stdc++.h>

using namespace std;

long long int fact(long long int n)
{
  return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
}

long countSubs(string s){
    // Complete this function
    int len = s.length();
    vector<int> freq(4,0);

    for(int i=0;i<len;i++)
    {
        if(s[i] == 'a') freq[0]++;
        if(s[i] == 'b') freq[1]++;
        if(s[i] == 'c') freq[2]++;
        if(s[i] == 'd') freq[3]++;
    }

    long long int ans1 = fact(freq[0])%(1000000007) * fact(freq[1])%(1000000007);;// (freq[0]*freq[1])
    long long int ans2 = fact(freq[2])%(1000000007) * fact(freq[3])%(1000000007);;//(freq[2]*freq[3])%(1000000007);
    long long int ans3 = fact(ans1)%(1000000007) * fact(ans2)%(1000000007);;//(ans1*ans2)%(1000000007);

    return (ans1+ans2+ans3) % (1000000007);
}

int main() {
    // Return the number of non-empty perfect subsequences mod 1000000007
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        long result = countSubs(s);
        cout << result << endl;
    }
    return 0;
}

