//Calcular el promedio o media de un vector
#include <iostream>
#include <iomanip>
#include <cmath>
#include<vector>
using namespace std;
int main()
{
    vector<double> numeros = {1,2,3,4,5,6,7,8,9,10};
    vector<double> xd = {};
    int complex = 0; 

    for (int i = 0; i < numeros.size(); i++) {
        xd.push_back(numeros[i]);
    }

    for (int i = 0; i < xd.size(); i++) {
        complex = complex + xd[i];
    }
    cout << "Bienvenido a tu calculador de promedio." << endl;
    cout << "Tienes un grupo de 10 numeros que son: 1,2,3,4,5,6,7,8,9 y 10." << endl;
    cout << "Tu media seria " << complex / xd.size() << "." << endl;

    
}