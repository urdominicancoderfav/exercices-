#include <iostream>
#include <vector>
#include <wchar.h>
#include <locale.h>
using namespace std; 

int main () {
    //Ejercicio 1
    /*
    int n1, n2; 
    int mayor_a_12 = 0; 

    for (int i = 0; i < 4; i++) {
        cout << "Escoja su base y su altura: " << endl; 
        cin >> n1; 
        cin >> n2; 
        int operation = n1 * n2 / 2;
        cout << "La base de tu triangulo es: " << n1 << " mientras que su altura es: " << n2 << " a su vez, su superficie es: " << operation << endl;
        if (operation > 12) {
            mayor_a_12++;
        }
    }

    cout << "Finalmente, hay " << mayor_a_12 << " triangulos que su superficie es mayor a 12 cm." << endl;
    */

   //Ejercicio 2
   /*
   int n1; 
   int suma = 0; 
   for (int i = 0; i < 10; i++) {
    cout << "Escoja un numero: " << endl;
    cin >> n1;
    if (i >= 5) {
        suma = suma + n1; 
    } 
   }
   
   cout << "La suma de los ultimos 5 numeros son: " << suma << endl;
   */

  //Ejercicio 3
  /*
  for (int i = 0; i <= 50; i++) {
    cout << 5 << " x " << i << " = " << 5 * i << endl; 
  }
  */

 //Ejercicio 4
 /*
 int n1; 
 cout << "Escoja un numero del 1 al diez: " << endl; 
 cin >> n1; 

 if (n1 >= 1 && n1 <= 10) {

    for (int i = 0; i <= 12; i++) {
    cout << n1 << " x " << i << " = " << 5 * i << endl; 
 }
}

else {
    cout << "Lo siento, su numero excede lo permitido." << endl;
 }
 */

 //Ejercicio 5
 /*
 int n1, n2, n3;
 int equilateros = 0; 
 int escalenos = 0; 
 int iscoceles = 0; 

 for (int i = 0; i < 6; i++) {
    cout << "Escoja los lados de su triangulo: " << endl; 
    cin >> n1; 
    cin >> n2;
    cin >> n3; 

    if (n1 == n2 && n1 == n3) {
        cout << "Como todos los lados son iguales, es equilatero." << endl; 
        equilateros++; 
    }

    else if (n1 != n2 && n1 == n3 || n2 != n1 && n2 == n3 || n3 != n2 && n3 == n1 || n3 != n1 && n3 == n2 || n1 != n3 && n1 == n2) {
        cout << "Como tiene 2 lados iguales, es iscoceles." << endl;
        iscoceles++;
    }

    else if (n1 != n2 && n1 != n3) {
        cout << "Como no tiene ningun lado igual es escaleno." << endl;
        escalenos++;
    }
 }

 if (equilateros < escalenos && equilateros < iscoceles) {
    cout << "El que tiene menos tipos de triangulos es el equilatero, con tan solo " << equilateros << " de por medio." << endl;  
 }

 else if (escalenos < equilateros && escalenos < iscoceles) {
    cout << "El que tiene menos tipos de triangulos es el escaleno, con tan solo " << escalenos << " de por medio." << endl;  
 }

 else if (iscoceles < equilateros && iscoceles < escalenos) {
    cout << "El que tiene menos tipos de triangulos es el iscoceles, con tan solo " << iscoceles << " de por medio." << endl;  
 } */

 //Ejercicio 6
 /*
  int cuadrante1 = 0; 
  int cuadrante2 = 0; 
  int cuadrante3 = 0; 
  int cuadrante4 = 0; 

  int n1, n2;

  for (int i = 0; i < 4; i++) {
    cout << "Escoja su par de numeros: " << endl; 
    cin >> n1; 
    cin >> n2; 

    if (n1 > 0 && n2 > 0) {
        cuadrante1++;
    }
    
    else if (n1 < 0 && n2 > 0) {
        cuadrante2++;
    }

    else if (n1 < 0 && n2 < 0) {
        cuadrante3++;
    }

    else if (n1 > 0 && n2 < 0) {
        cuadrante4++;
    }
}

  cout << "Finalmente. El cuadrante 1 ha tenido " << cuadrante1 << " puntos." << endl << "El cuadrante 2 ha tenido " << cuadrante2 << " puntos." << endl << "El cuadrante 3 ha tenido " << cuadrante3 << " puntos." << endl << "El cuadrante 4 ha tenido " << cuadrante4 << " puntos." << endl; 
  */

 //Ejercicio 7
 /*
 int n_negativos = 0; 
 int n_positivos = 0; 
 int n_multiplos_de_15 = 0; 
 int suma_de_pares; 

 int n; 

 for (int i = 0; i < 10; i++) {
    cout << "Escoja un numero: " << endl; 
    cin >> n; 

    if (n < 0) {
        n_negativos++;
    }

    if (n > 0) {
        n_positivos++;
    }

    if (15 % n == 0) {
        n_multiplos_de_15++;
    }

    if (n % 2 == 0) {
        suma_de_pares = suma_de_pares + n; 
    }
 }

 cout << "Han habido " << n_negativos << " numeros negativos." << endl;
 cout << "Han habido " << n_positivos << " numeros positivos." << endl;
 cout << "Han habido " << n_multiplos_de_15 << " numeros multiplos de 15." << endl; 
 cout << "La suma de todos los numeros pares ha dado " << suma_de_pares << " ." << endl; 
 */

//Ejercicio 8 
vector<int> estudiantes_mañana = {18,19,20,25,34};
vector<int> estudiantes_tarde = {18,20,34,19,23,28};
vector<int> estudiantes_noche = {45,32,78,19,34,53,69,26,30,19,41};

int promedio1,promedio2,promedio3 = 0;

for (int i = 0; i < estudiantes_mañana.size(); i++) {
    promedio1 = promedio1 + estudiantes_mañana[i];
}

for (int i = 0; i < estudiantes_tarde.size(); i++) {
    promedio2 = promedio2 + estudiantes_tarde[i];
}

for (int i = 0; i < estudiantes_noche.size(); i++) {
    promedio3 = promedio3 + estudiantes_noche[i];
}

int operacion1 = promedio1 / estudiantes_mañana.size();
int operacion2 = promedio2 / estudiantes_tarde.size(); 
int operacion3 = promedio3 / estudiantes_noche.size(); 


cout << "El promedio de cada grupo de estudiantes." << endl; 
cout << "El promedio de los estudiantes que van del turno de mañana es de " << operacion1 << " de edad." << endl; 
cout << "El promedio de los estudiantes que van del turno de tarde es de " << operacion2 << " de edad." << endl; 
cout << "El promedio de los estudiantes que van del turno de noche es de " << operacion3 << " de edad." << endl; 

if (operacion1 > operacion2 && operacion1 > operacion3) {
    cout << "El de mayor promedio es el de los estudiantes por la manana." << endl;
}

else if (operacion2 > operacion1 && operacion2 > operacion3) {
    cout << "El mayor promedio es el de los estudiantes por la tarde." << endl;
}

else if (operacion3 > operacion1 && operacion3 > operacion2) {
    cout << "El mayor promedio es el de los estudiantes por la noche." << endl;
}

}