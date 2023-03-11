#include <iostream>
#include "archivo.h"
using namespace std;
/*int main() {
   int num,i,M;
    cout<< "ingrese numero"<<endl;
    cin>> num;
    i = 1;
    cout<<endl;
    while (i<=10) {
        M = i*num;
        cout<<i<<" x "<<num<<" = "<<M<<endl;
        i=i+1;
    }

    return 0;
}

int main() {

    int tabla = 0;
    int multiplicador = 0;

    for (tabla = 5;tabla <= 9; tabla += 1) {
        cout << "Tabla del " << tabla << ":" << endl;

        for (multiplicador = 1; multiplicador <= 10; multiplicador++) {
            cout << tabla << " x " << multiplicador << " = " << tabla * multiplicador << endl;
        }

        cout << endl;
    }

}
int main() {
    int dia;
    cout<< "numero"<<endl;
    cin>> dia;
    switch(dia){

        case 1:
            cout<<"Lunes dia laboral"<<endl;
            break;
        case 2:
            cout<<"martes dia laboral"<<endl;
            break;
        case 3:
            cout<<"miercoles dia laboral"<<endl;
            break;
        case 4:
            cout<<"jueves dia laboral"<<endl;
            break;
        case 5:
            cout<<"viernes dia laboral"<<endl;
            break;
        case 6:
            cout<<"sabado dia no laboral"<<endl;
            break;
        case 7:
            cout<<"domingo dia no laboral"<<endl;
            break;
    }



    return 0;
}*/
int main(){

    leerArchivo1( "C:\\Users\\enamo\\OneDrive\\Escritorio\\examen.txt.txt");
    cout << endl;
    modificarArchivo1("C:\\Users\\enamo\\OneDrive\\Escritorio\\examen.txt.txt");
    cout << endl;
    leerArchivo1("C:\\Users\\enamo\\OneDrive\\Escritorio\\examen.txt.txt");
    cout<< "carnet 0909-15-16741"<< std::endl;
    cout << "Fin del programa" << std::endl;
    return 0;

     }