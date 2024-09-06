#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll c = 0;
    string s;

    cin >> s;

    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A' || s[i] == 'a') c++;
    }
    
    if(c > 0) cout << "A letra a aparece nessa string " << c << " vezes.\n";
    else cout << "A letra a nao aparece nessa string.\n";

    return 0;
}
