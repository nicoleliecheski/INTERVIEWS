#include <bits/stdc++.h>
using namespace std;

vector<pair<string, double>> distribuidora = {{"SP", 67836.43}, {"RJ", 36678.66}, {"MG", 29229.88}, {"ES", 27165.48}, {"Outros", 19849.53}};

int main(){

    double total = 0.0;

    for (int i = 0; i < 5; i++)
    {   
        total += distribuidora[i].second;
    }

    cout << "O percentual de representacao que cada estado teve dentro do valor total mensal da distribuidora foi:\n";

    for (int i = 0; i < 5; i++)
    {   
        double x = (100*distribuidora[i].second)/total;
        cout << distribuidora[i].first << ": " << x << "%\n";
    }
    
    return 0;
}
