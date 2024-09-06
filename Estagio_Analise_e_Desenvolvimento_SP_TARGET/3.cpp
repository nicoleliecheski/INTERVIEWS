#include <bits/stdc++.h>
#include <fstream>
using namespace std;

//biblioteca usada para ler e lidar com o arquivo json
#include <json.hpp> //esse arquivo esta no repositorio
using json = nlohmann::json;

vector<pair<double, int>> v;

int main(){

    ifstream f("dados.json");
    json data = json::parse(f);

    double media = 0.0, c;

    v.resize(30);

    for (int i = 0; i < 30; i++)
    {
        int dia = data[i].at("dia").get<int>();
        double valor = data[i].at("valor").get<double>();
        v[i] = {valor, dia};
        media += valor;
        if(valor > 0.0) c += 1.0;
    }

    media /= c;
    
    sort(v.begin(), v.end());
    
    cout << "O menor valor de faturamento ocorrido em um dia do mes: " << v[0].first << "\n";
    cout << "O maior valor de faturamento ocorrido em um dia do mes: " << v[29].first << "\n";
    cout << "Numero de dias no mes em que o valor de faturamento diario foi superior a media mensal: ";
    for (int i = 0; i < 30; i++)
    {
        if(v[i].first > media) cout << v[i].second << " ";
    }
    cout << "\n";
    
    return 0;
}
