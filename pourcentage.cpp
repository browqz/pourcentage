#include <iostream>
using namespace std;

int main() {
    double nombre, pourcentage, resultat;

    cout << "Entre le nombre choisi : ";
    cin >> nombre;

    cout << "Entre le pourcentage voulu : ";
    cin >> pourcentage;

    resultat = (nombre * pourcentage) / 100;

    cout << "Le " << pourcentage << "% de " << nombre << " est : " << resultat << endl;

    return 0;
}