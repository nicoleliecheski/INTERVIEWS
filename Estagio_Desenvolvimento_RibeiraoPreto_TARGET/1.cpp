#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll v[100];

ll solve(ll a){
    if(v[a] != 0) return v[a];
    if(a == 0) return 0;
    if(a == 1) return 1;

    return v[a] = solve(a-1) + solve(a-2);
}

int main(){

    ll n, flag = 0;

    cin >> n;

    solve(93);

    for (ll i = 0; i < n; i++)
    {
        if(v[i] == n){
            flag = 1;
            break;
        }
    }

    if(flag == 1) cout << "O numero pertece a sequencia de Fibonacci.\n";
    else cout << "O numero nao pertece a sequencia de Fibonacci.\n";

    return 0;
}
