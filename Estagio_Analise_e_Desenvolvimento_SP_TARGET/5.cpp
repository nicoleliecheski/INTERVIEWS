#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, s_inversa = "";

    cin >> s;

    for (int i = s.size()-1; i >= 0; i--)
    {
        s_inversa += s[i];
    }
    
    cout << s_inversa << "\n";
    
    return 0;
}
